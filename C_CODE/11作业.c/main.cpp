#include <stdio.h>
#include <windows.h>
#pragma disable(warning:4996)














//喝汽水问题
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水（编程实现）。
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



//模拟实现库函数strlen

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




//strcpy实现
//模拟实现库函数strcpy

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
//调整奇数偶数顺序
//调整数组使奇数全部都位于偶数前面。
//题目：
//输入一个整数数组，实现一个函数，
//来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
//所有偶数位于数组的后半部分。
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


