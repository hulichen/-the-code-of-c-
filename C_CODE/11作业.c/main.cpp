#include <stdio.h>
#include <windows.h>
#pragma disable(warning:4996)














//����ˮ����
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ�����ʵ�֣���
//
//int main()
//{
//	int money = 20;
//	int botle = 20;
//	int sum = 20;
//	while (botle > 1) {
//		int count = 0;
//		if (1 == botle % 2) {
//			count++;
//		}
//		count += botle / 2;
//		botle = count;
//		sum += botle / 2;
//	}
//	printf("%d ", sum);
//	return 0;
//}



//ģ��ʵ�ֿ⺯��strlen

//int Strlen(char *str) {
//	if (str == NULL) {
//		return 0;
//	}
//	int count = 0;
//	while (*str++) {
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	char str1[] = { "tryjddjyf" };
//	printf("%d",Strlen(str1));
//	return 0;
//}




//strcpyʵ��
//ģ��ʵ�ֿ⺯��strcpy

//char* Strcpy(char*str1, char* str2)
//{
//	char* p = str2;
//	while (*p++ = *str1++);
//	return p;
//}
//int main()
//{
//	char str1[] = {"sdagdsasd513aslll"};
//	char str2[64] = {};
//	Strcpy(str1, str2);
//	for (int i = 0; i < sizeof(str2) / sizeof(str2[0]); i++) {
//		printf("%c ", str2[i]);
//	}
//	return 0;
//}





//
//��������ż��˳��
//��������ʹ����ȫ����λ��ż��ǰ�档
//��Ŀ��
//����һ���������飬ʵ��һ��������
//�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
//����ż��λ������ĺ�벿�֡�
//
int * PaiXu(int* str, int num) {
	int arr2[32] = {};
	int count = 0;
	for (int i = 0; i < num; i++) {
		if (1 == str[i] % 2) {
			arr2[count] = str[i];
			count++;
		}		
	}
	for (int i = 0; i < num; i++) {
		if (0 == str[i] % 2) {
			arr2[count] = str[i];
			count++;
		}
	}
	for (int i = 0; i < num; i++) {
		str[i] = arr2[i];
	}
	return str;
}
int main()
{
	int arr1[] = { 56,57,54,69,35,47,5,8,11,77,99,44 ,5448,787,89};
	int num = sizeof(arr1) / sizeof(arr1[0]);
	PaiXu(arr1,num);
	for (int i = 0; i < num; i++) {
		printf("%d ", arr1[i]);
	}
}


