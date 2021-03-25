#include <stdio.h>
#include <Windows.h>
#pragma warning(disable:4996)
#include <math.h>
#include <string.h>

//int sushu(int x = 0) {
//	for(int i = 2;i <x;i++){
//	if (0 == x % i){
//		return 0;
//	}
//	return 1;
//	}
//}

//
//int main()
//{
//	int n = 0;
//	printf("输入一个整数");
//	scanf("%d", &n);
//	if (sushu(n)) {
//		printf("%d 是素数\n", n);
//	}
//	return 0;
//}

//打印 100-200的素数 
//int main() {
//	for (int i = 100; i <= 200; i++) {
//		sushu(i);
//		if (sushu(i))
//		{
//			printf("%d 是素数\n", i);
//		}
//	}
//	return 0;
//}



//判断某一年是不是闰年
//int RunNian(int x ) {
//	if ((x % 4 == 0 && x % 100 != 0) || (x % 400) == 0) {
//		return 1;
//	}
//	return 0;
//}
//int main() {
//		int n = 0;
//		printf("输入一个整数\n");
//		scanf("%d", &n);
//		if (RunNian(n)) {
//			printf("%d年是闰年", n);
//		}
//		printf("%d年不是闰年\n", n);
//		return 0;
//}




////实现一个函数来交换两个整数的内容。
//void Swap(int *x, int *y) {
//	int t = 0;
//	t = *y;
//	*y = *x;
//	*x = t;
//}
//int main() {
//	int a = 0;
//	int b = 0;
//	printf("输入两个整数：\n");
//	scanf("%d %d", &a, &b);
//	printf("%d  %d", a, b);
//	Swap(&a, &b);
//	printf("%d  %d", a, b);
//	return 0;
//}


//乘法口诀表    实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定
//如：输入9，输出9 * 9口诀表，输出12，输出12 * 12的乘法口诀表。


//void chengfabiao(int x) {
//	for (int i = 1; i <= x; i++) {
//		for (int j = 1; j <= i; j++) {
//			printf("%2dx%2d = %3d  ", i, j, i * j);
//		}
//		printf("\n");
//	}
//}int main() {
//	chengfabiao(15);
//	return 0;
//}



//打印一个数的每一位    递归方式实现打印一个整数的每一位

//int dd1( int x ) {
//	while(1) {
//		printf("%d  ", x%10);
//		x /= 10;
//		if (0 == x % 10 ) {
//			break;
//		}
//	}
//	return 0;
//}
//
//
////递归实现  输出正序
//void dd2(unsigned int n ){
//		if (n > 9) {
//			 dd2(n/10);
//		}
//		printf("%d ", n%10);		
//}
//
//int main() {
//   dd1(154568);
//   printf("\n");
//    dd2(2156161);
//	return 0;
//}


//strlen的模拟（递归实现）    递归和非递归分别实现strlen

//
//int SLen1(char str[]){
//
//		if ('\0' == *str)
//		{
//			return 0;
//		}
//		else {
//			return 1+ SLen1(1+str);
//		}
//}
//
//int SLen2(char str[],int count) {
//
//	if ('\0' == *str) {
//		return count;
//	}
//	else {
//		count++;
//		return SLen2(1+str,count);
//	}
//}

//
//int main() {
//	int count = 0;
//	int* c = &count;
//	char arr[] = {"sdsadasdasdasd6525616dsada"};
//	printf("%d ",SLen2(arr,*c));
//	return 0;
//}
//
//int SLen3(const char* str) {
//	const char* start = str;
//	int count = 0;
//	while (*start != 0)
//	{
//		count++;
//		start++;
//	}
//	return count;
//}
//int main() {
//	const char* arr =  "sdsadasdasdasd6525616dsada" ;
//	printf("%d ", SLen3(arr));
//	return 0;
//}

// 求阶乘    递归和非递归分别实现求n的阶乘（不考虑溢出的问题）


//int jc1(int x) {
//	int n = 1;
//	for (int i = 1; i <= x; i++) {
//		n *= i;
//	}
//	return n;
//}
//int jc2(int x) {
//	if (x == 1) {
//		return 1;
//	}
//	else {
//		return x * jc2(x - 1);
//	}
//}
//
//int main() {
//	printf("%d \n", jc1(9));
//	printf("%d \n", jc2(9));
//	return 0;
//}

int main() {
	char a = -1;
	char b = 255;
	char c = 0XFF;
	printf("%c \n", a);
	printf("%c \n", b);
	printf("%c \n", c);
	printf("%u \n", a);
	printf("%u \n", b);
	printf("%u \n", c);
	return 0;
}







