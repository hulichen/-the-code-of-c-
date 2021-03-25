#include "contact.h"

void InitContact(contact_t** ct) //��ʼ��ͨѶ¼��С
{
	*ct =(contact_t*)malloc(sizeof(contact_t) + INIT * sizeof(person_t));
	if (NULL == *ct) {
		printf("malloc error!\n");
		exit(1);
	}
	(*ct)->size = 0;
	(*ct)->cap = INIT;
}

static int  IsFull(contact_t*  ct) //�ж�ͨѶ¼�Ƿ�����
{
	assert(ct);
	return ct->size == ct->cap;
}

static int Inc(contact_t** ct) //ͨѶ¼����
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

static int IsExist(contact_t* ct, char* name)//�ж�������û��Ƿ��Ѿ�����
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

void AddPersonToContact(contact_t** ct) //��ͨѶ¼�������û�
{
	assert(*ct);
	if (!IsFull(*ct) || Inc(ct)) {
		person_t* p = (*ct)->persons + (*ct)->size;

		printf("����������\n");
		char name[SIZE / 16];
		scanf(" %s", name);
		if (IsExist(*ct , name) >= 0) {
			printf("user exist!\n");
			return;
		}
		else {
			strcpy(p->name,name); 
		}

		printf("������绰\n");
		scanf(" %s", p->telphone);
		printf("�������Ա�\n");
		scanf(" %s", &(p->sex));
		printf("����������\n");
		scanf(" %d", &(p->age));
		printf("�������ַ\n");
		scanf(" %s", p->adress);
		
		(*ct)->size++;
		printf("add %s success!\n", p->name);
	}
	else {
		printf("����ʧ��!\n");
	}
}

void SearchContact(contact_t* ct)  //�����������û�
{
	assert(ct);
	char name[SIZE / 16];
	printf("������Ҫ��õ���ϵ������:\n");
	scanf("%s", &name);
	int x = IsExist(ct, name);
	if (x >= 0) {
		ShowContact(ct,x);
		return;
	}
	printf("�û������ڣ�\n");
}

void DelPersonContact(contact_t* ct) //������ɾ���û�
{
	assert(ct);
	char name[SIZE / 16];
	printf("������Ҫɾ������ϵ������:\n");
	scanf("%s", &name);
	int index = IsExist(ct, name);
	if (index >= 0) {
		person_t *p = ct->persons+ct->size;
		p[index] = p[ct->size];
		ct->size--;
		printf("delate success!\n");
		return;
	}
	printf("�û������ڣ�\n");
}

void ClearContact(contact_t* ct)  //�������ͨѶ¼
{
	assert(ct);
	ct->size = 0;
}

void ModContact(contact_t* ct)   //�޸��û���Ϣ��ֻд���޸������͵绰����
{
	assert(ct);
	char name[SIZE / 16];
	printf("������Ҫ�޸ĵ���ϵ������:\n");
	scanf("%s", &name);
	int index = IsExist(ct, name);
	person_t* p = ct->persons + index;
	if (index >= 0) {
		ShowContact(ct, index);
		printf("������Ҫ�޸ĺ����ϵ������:\n");
		scanf(" %s",p->name );
		printf("������Ҫ�޸ĺ����ϵ�˵绰:\n");
		scanf(" %s", p->telphone);
		return;
	}
	printf("%s�û������ڣ�\n",name);
}


void *Cmp(const void * p1, const void* p2) //qsort����Ҫ�õ��ĵĻص�����
{
	person_t* x_p = (person_t*)p1;
	person_t* y_p = (person_t*)p2;
	return strcmp(x_p->name, y_p->name);
}
void SortContact(contact_t* ct) //����qsort������ͨѶ¼�е�������������
{
	assert(ct);
	qsort(ct->persons, ct->size,sizeof(person_t),Cmp);
}

void ShowContact(contact_t* ct, int pos)//��ʾģ��  pos = -1 ����ʾȫ��  ������ʾ��pos���û�ͨѶ¼��Ϣ   ��index+1���˵�ͨѶ¼��Ϣ
{
	assert(ct);
	if (pos == -1) {
		if (ct->size == 0) {
			printf("empty!\n");
		}
		printf("��ǰ������%d/%d\n", ct->size, ct->cap);
		for (int i = 0; i < ct->size; i++) {
			printf("%10s | %10s\n", ct->persons[i].name, ct->persons[i].telphone);
		}
	}
	else {
		printf("��ǰ������%d/%d     %sλ�ڵ�%d����ϵ��\n", ct->size, ct->cap, ct->persons[pos].name,pos+1);
		printf("%10s | %10s\n", ct->persons[pos].name, ct->persons[pos].telphone);
	}
}