#include <stdio.h>
#include <windows.h>
#pragma warning(disable:4996)






















//void PrintDiamond(int n) {
//	int size = 2 * n + 1;
//	char str[64];
//	memset(&str, ' ', 64);
//	for (int i = 0; i <= n; i++) {
//		str[n - i] = str[n + i] = '*';
//		for (int i = 0; i < size; i++) {
//			printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//
//	for (int i = n; i > 0; i--) {
//		str[n - i] = str[n + i] = ' ';
//		for (int i = 0; i < size; i++) {
//			printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//}

//int main() {
	//PrintDiamond(20);

	//int arr[] = { -56,-2,0,22,25,33,35,44,45,55,66,77,88,99,105,555,3333 };
	//int num = 0;
	//printf("����Ҫ���ҵ�����\n");
	//scanf("%d", &num);
	//int length = (sizeof(arr) / sizeof(arr[0]))-1;
	//int	left = 0;
	//int right = length;
	//int mid = (left + right) / 2;
	//while(left <= right){
	//	if ((arr[length] < num) || (arr[0] > num)) {
	//		printf("%d����������\n", num);
	//		break;
	//	}
	//	else if (arr[mid] < num) {
	//		left =  mid+1;
	//	}
	//	else if (arr[mid] > num) {
	//		right =  mid-1;
	//		}
	//	
	//	else  {
	//		printf("%d\n", mid);
	//		break;
	//	}
	//	mid = (left + right) / 2;
	//}
	//


	//int num = 0;
	//int flag = 1;
	//srand((unsigned int)time(NULL));
	//int r = rand() % RANG + 1;
	//while (flag)
	// {
	//	printf("������:\n");
	//	scanf("%d", &num);
	//	if (r > num) {
	//		printf("��С��\n");
	//		continue;
	//	}
	//	else if (r < num) {
	//		printf("�´���\n");
	//		continue;
	//	}
	//	else {
	//		printf("�¶���\n");
	//		flag = 0;
	//	}
	//}

	//
	//
	//	return 0;
	//}

//
//int a, b, c;
//int max, miu, min;
//int main()
//{
//	printf("������������");
//	scanf("%d %d %d", &a, &b, &c);
//	if (a > b && a > c)
//	{
//		max = a;
//		if (b > c) {
//			miu = b;
//			min = c;
//		}
//		else {
//			min = b;
//			miu = c;
//		}
//	}
//	else if (b > c) {
//		max = b;
//		if (a > c) {
//			miu = a; min = c;
//		}
//		else {
//			miu = c; min = a;
//		}
//	}
//	else {
//		max = c;
//		if (a > b) {
//			miu = a; min = b;
//		}
//		else {
//			miu = b; min = a;
//		}
//	}
//	printf("�Ӵ�С˳��Ϊ%d %d %d", max, miu, min);
//}


//int reverse_string(char* string,int length) {
//	for (int i = 0; i <= (length-1) / 2; i++) {
//		char tem[] = { 0 };
//		tem[0] = string[i];
//		string[i] = string[length - i];
//		string[length - i] = tem[0];
//	}
//	int count = 0;
//	while(count <= length -1) {
//		printf("%s", string);
//		string++;
//		return 0;
//	}
//}
//
//int main() {
//	char str[] = { "ddsadsaodsaahbhbjj" };
//	int num = sizeof(str) / sizeof(str[0]);
//	int count = 0;
//	while (count <= num - 1) {
//		printf("%s", str[count]);
//		count++;
//	}
//	//reverse_string(str, num);
//	return 0;
//}




//void reverse_string(char* string)
//{
//	if (*(string++) !=  '\0' )
//	{
//		reverse_string(string);
//	}
//	printf("%c", *(string - 1));
//}
//
//
//int main()
//{
//	char str[] = "abcd";
//	reverse_string (str);
//	printf("\n");
//	system("pause");
//	return 0;
//}


//����һ������ÿλ֮�ͣ��ݹ�ʵ�֣�  дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮��
//���磬����DigitSum(1729)����Ӧ�÷���1 + 7 + 2 + 9�����ĺ���19
//���룺1729�������19

//int sum = 0;
//int DigitSum(int n) {
//		if (n > 9) {
//			DigitSum(n/10);
//		} 
//		sum += n%10 ;
//		return sum ;		
//}
//int main() {
//	printf("%d\n", DigitSum(1729));
//	return 0;
//}
//
//






//�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲�������

//int Fib1(int n) {
//	int a = 1;
//	int b = 1;
//	int sum  = 1;
//	int count = 1;
//	while (count < n-1) 
//	{
//		sum = a + b;
//		a = b;
//		b = sum;
//		count++;
//	}
//	return sum;
//}
//int Fib2(int n) {
//	if (n > 2) {
//		return Fib2(n - 1) + Fib2(n - 2);
//	}
//	return 1;
//}
//
//int main() {
//	printf ("%d\n",Fib1(15));
//	printf("%d\n",Fib2(15));
//
//	return 0;
//}




//��дһ������ʵ��n��k�η���ʹ�õݹ�ʵ�֡�
//int CiFang(int n,int k) {
//	if (k > 1) {
//		return  n * CiFang(n, k-1);
//	}
//	return n ;
//}
//
//int main() {
//
//	printf("%d", CiFang(4, 3));
//	return 0;
//
//}








