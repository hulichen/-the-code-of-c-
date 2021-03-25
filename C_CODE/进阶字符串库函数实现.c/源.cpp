#include<stdio.h>
#include<Windows.h>
#include<assert.h>
//char* My_strcy(char* str2, const char* str1)
//{
//	assert(str1);
//	char* dst = str2;
//	while (*str2++ = *str1++) {
//	}
//	return dst;
//}
//
//int my_strlen(const char* str)
//{
//	assert(str);
//	int count = 0;
//	while (*str) {
//		str++;
//		count++;
//	}
//	return count;
//}



//模拟实现strcmp

//int my_strcmp1(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	while (*str1 == *str2) {
//		if (*str1 == '\0') {
//			return 0;
//		}
//		str1++, str2++;
//	}
//	if (*str1 > * str2) {
//		return 1;
//	}
//	return -1;
//}
//
//int my_strcmp2(const char* str1, const char* str2)
//{
//	assert(str1);
//	assert(str2);
//	int ret = (*str1 - *str2);
//	while (!ret&& *str1) {
//		ret = (*str1 - *str2);
//		++str1, ++str2;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "baasdaee";
//	char str2[] = "badsdaefff";
//	printf("%d\n", my_strcmp1(str1, str2));
//	return 0;
//}


//模拟实现strcat
//char* my_strcat(char*  str1, const char*str2)
//{
//	assert(str2);
//	char* dst = str1;
//	while (*str1) {
//		str1++;
//	}
//	while (*str1++ = *str2++);
//	return dst;
//}
//int main()
//{
//	char str1[] = "baasdaee";
//	char str2[] = "badsdaefff";
//	printf("%s\n", my_strcat(str1, str2));
//	system("pause");
//	return 0;
//}

//模拟实现strstr
//char* my_strstr(const char* str1, const char *str2)
//{
//	 char* s1 = NULL;
//	 assert(str1), assert(str2);
//	 const char* find = str2;
//	 while (*str1) {
//		 const char* start = str1;
//		 while (*start == *find) {
//			 start++,find++;
//			 if (*find == '\0') {
//				 return (char*)str1;
//			 }
//		 }
//		 find = str2;		
//		 str1++;
//	 }
//	 return s1;
//}
//
//int main()
//{
//	char str1[] = "bagg.adf.hjsd fopx cCfbasda adfedaf afhu kasfyu olufg.adf.e";
//	char str2[] = "adsad";
//	printf("%s\n", my_strstr(str1, str2));
//	system("pause");
//	return 0;
//}



//模拟实现memmove

//void* my_memmove(void* dst, const void* src,size_t num)
//{	
//	void* ret = dst;
//	if (src >=  dst || (char*)src + num < (char*)dst) {
//		while (num--) {
//			*(char*)dst = *(char*)src;
//			dst =(char*)dst+1;
//			src =(char*)src+1;
//		}
//	}
//	else {
//		while (num--) {
//			*((char*)dst + num) = *((char*)src + num);
//			dst = (char*)dst - 1;
//			src = (char*)src - 1;		
//		}
//	}
//	return ret;
//}
//
//int main()
//{
//	char str1[] = "fbs.adaasdaee.";
//	char* str2 = str1 + 3;
//	printf("%s\n", my_memmove(str1, str2, 5));
//	return 0;
//}

//模拟实现memcpy
//void* my_memcpy(void* dst, const void* src, size_t num)
//{
//	assert(src);
//	assert(dst);
//	void* ret = dst;
//	while (num--) {
//		*(char*)dst = *(char*)src;
//		dst = (char*)dst + 1;
//		src = (char*)src + 1;
//	}
//	return ret;
//}
//int main()
//{
//	char str1[] = "fbs.adaasdaee.";
//	char* str2 = str1 + 3;
//	printf("%s\n", my_memcpy(str1, str2, 5));
//	return 0;
//}



//实现一个通讯录；
//通讯录可以用来存储1000个人的信息，每个人的信息包括：姓名、性别、年龄、电话、住址
//提供方法：
//添加联系人信息
//删除指定联系人信息
//查找指定联系人信息
//修改指定联系人信息
//显示所有联系人信息
//清空所有联系人
//以名字排序所有联系人

//void addnum(void*p) {
//	for (int i = 0; i < 1000; i++) {
//		if (p[i].falg == 0) {
//
//
//		}	
//	}
//}
//int main()
//{
//	typedef struct dit
//	{
//		int  flag = 0;
//		char name[16];
//		char  sex;
//		int age;
//		int tel;
//		char address[32];
//	}dit ;
//	dit lst[1000];
//	dit* p = lst;
//	
//
//	addnum(p);
//


	