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



//ģ��ʵ��strcmp

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


//ģ��ʵ��strcat
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

//ģ��ʵ��strstr
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



//ģ��ʵ��memmove

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

//ģ��ʵ��memcpy
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



//ʵ��һ��ͨѶ¼��
//ͨѶ¼���������洢1000���˵���Ϣ��ÿ���˵���Ϣ�������������Ա����䡢�绰��סַ
//�ṩ������
//�����ϵ����Ϣ
//ɾ��ָ����ϵ����Ϣ
//����ָ����ϵ����Ϣ
//�޸�ָ����ϵ����Ϣ
//��ʾ������ϵ����Ϣ
//���������ϵ��
//����������������ϵ��

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


	