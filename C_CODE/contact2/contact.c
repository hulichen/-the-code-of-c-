#include "contact.h"

void InitContact(contact_t** ct) //初始化通讯录大小
{
	*ct =(contact_t*)malloc(sizeof(contact_t) + INIT * sizeof(person_t));
	if (NULL == *ct) {
		printf("malloc error!\n");
		exit(1);
	}
	(*ct)->size = 0;
	(*ct)->cap = INIT;
}

static int  IsFull(contact_t*  ct) //判断通讯录是否满了
{
	assert(ct);
	return ct->size == ct->cap;
}

static int Inc(contact_t** ct) //通讯录扩容
{
	assert(*ct);
	int ret = 0;
	contact_t* p = (contact_t*)realloc(*ct, sizeof(contact_t) + sizeof(person_t) * ((*ct)->cap + INC_SIZE));
	if (NULL != p) {
		printf("realloc success!\n");
		*ct = p;
		ret = 1;
		p->cap = (*ct)->cap + INC_SIZE;
	}
	return ret;
}

static int IsExist(contact_t* ct, char* name)//判断输入的用户是否已经存在
{
	assert(ct);
	person_t* p = ct->persons;
	person_t* end = ct->persons +ct->size;
	int index = 0;
	for (p; p < end; p++, index++) {
		if (0 == strcmp(name, p->name)) {
			return index;
		}
	}
	return -1;
}

void AddPersonToContact(contact_t** ct) //向通讯录中增加用户
{
	assert(*ct);
	if (!IsFull(*ct) || Inc(ct)) {
		person_t* p = (*ct)->persons + (*ct)->size;

		printf("请输入姓名\n");
		char name[SIZE / 16];
		scanf(" %s", name);
		if (IsExist(*ct , name) >= 0) {
			printf("user exist!\n");
			return;
		}
		else {
			strcpy(p->name,name); 
		}

		printf("请输入电话\n");
		scanf(" %s", p->telphone);
		printf("请输入性别\n");
		scanf(" %s", &(p->sex));
		printf("请输入年龄\n");
		scanf(" %d", &(p->age));
		printf("请输入地址\n");
		scanf(" %s", p->adress);
		
		(*ct)->size++;
		printf("add %s success!\n", p->name);
	}
	else {
		printf("扩容失败!\n");
	}
}

void SearchContact(contact_t* ct)  //按姓名查找用户
{
	assert(ct);
	char name[SIZE / 16];
	printf("请输入要查好的联系人姓名:\n");
	scanf("%s", &name);
	int x = IsExist(ct, name);
	if (x >= 0) {
		ShowContact(ct,x);
		return;
	}
	printf("用户不存在！\n");
}

void DelPersonContact(contact_t* ct) //按姓名删除用户
{
	assert(ct);
	char name[SIZE / 16];
	printf("请输入要删除的联系人姓名:\n");
	scanf("%s", &name);
	int index = IsExist(ct, name);
	if (index >= 0) {
		person_t *p = ct->persons+ct->size;
		p[index] = p[ct->size];
		ct->size--;
		printf("delate success!\n");
		return;
	}
	printf("用户不存在！\n");
}

void ClearContact(contact_t* ct)  //清空整个通讯录
{
	assert(ct);
	ct->size = 0;
}

void ModContact(contact_t* ct)   //修改用户信息，只写了修改姓名和电话部分
{
	assert(ct);
	char name[SIZE / 16];
	printf("请输入要修改的联系人姓名:\n");
	scanf("%s", &name);
	int index = IsExist(ct, name);
	person_t* p = ct->persons + index;
	if (index >= 0) {
		ShowContact(ct, index);
		printf("请输入要修改后的联系人姓名:\n");
		scanf(" %s",p->name );
		printf("请输入要修改后的联系人电话:\n");
		scanf(" %s", p->telphone);
		return;
	}
	printf("%s用户不存在！\n",name);
}


void *Cmp(const void * p1, const void* p2) //qsort中需要用到的的回调函数
{
	person_t* x_p = (person_t*)p1;
	person_t* y_p = (person_t*)p2;
	return strcmp(x_p->name, y_p->name);
}
void SortContact(contact_t* ct) //利用qsort函数对通讯录中的姓名进行排序
{
	assert(ct);
	qsort(ct->persons, ct->size,sizeof(person_t),Cmp);
}

void ShowContact(contact_t* ct, int pos)//显示模块  pos = -1 则显示全部  否则显示第pos个用户通讯录信息   即index+1个人的通讯录信息
{
	assert(ct);
	if (pos == -1) {
		if (ct->size == 0) {
			printf("empty!\n");
		}
		printf("当前容量：%d/%d\n", ct->size, ct->cap);
		for (int i = 0; i < ct->size; i++) {
			printf("%10s | %10s\n", ct->persons[i].name, ct->persons[i].telphone);
		}
	}
	else {
		printf("当前容量：%d/%d     %s位于第%d个联系人\n", ct->size, ct->cap, ct->persons[pos].name,pos+1);
		printf("%10s | %10s\n", ct->persons[pos].name, ct->persons[pos].telphone);
	}
}