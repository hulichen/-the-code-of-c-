#include<stdio.h>
#include<stdlib.h>
#include<string.h>










//猜凶手
//题目内容 :
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词 :
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手。
//
//char findkiller(void){
//	for (char killer = 'a'; killer <= 'd'; killer++) {
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3) {
//			return  killer;
//		}
//	}
//	return 'n';
//}

//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//void  ShunXu() {
//	for (int a = 1; a <= 5; a++) {
//		for (int b = 1; b <= 5; b++) {
//			for (int c = 1; c <= 5; c++) {
//				for (int d = 1; d <= 5; d++) {
//					for (int e = 1; e <= 5; e++) {
//						if (((b == 2) + (a == 3)) == 1 && \
//							((b == 2) + (e == 4)) == 1 && \
//							((c == 1) + (d == 2)) == 1 && \
//							((c == 5) + (d == 3)) == 1 && \
//							((e == 4) + (a == 1)) == 1) {
//							int  flag = 0;
//							flag |= (1 << (a - 1));
//							flag |= (1 << (b - 1));
//							flag |= (1 << (c - 1));
//							flag |= (1 << (d - 1));
//							flag |= (1 << (e - 1));
//							if (flag == 1 || flag == 3 || flag == 7 || flag == 15 || flag == 31) {
//								printf("a:%d b:%d c:%d d:%d e:%d \n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//void Rank()
//{
//	for (int a = 1; a <= 5; a++){
//		for (int b = 1; b <= 5; b++){
//			for (int c = 1; c <= 5; c++){
//				for (int d = 1; d <= 5; d++){
//					for (int e = 1; e <= 5; e++){
//						if (((b == 2) + (a == 3)) == 1 && \
//							((b == 2) + (e == 4)) == 1 && \
//							((c == 1) + (d == 2)) == 1 && \
//							((c == 5) + (d == 3)) == 1 && \
//							((e == 4) + (a == 1)) == 1) {
//							int flag = 0;
//							flag |= (1 << (a - 1));
//							flag |= (1 << (b - 1));
//							flag |= (1 << (c - 1));
//							flag |= (1 << (d - 1));
//							flag |= (1 << (e - 1));
//
//							if (flag == 1 || flag == 3 || flag == 7 || flag == 15 || flag == 31) {
//								printf("a: %d b: %d c: %d d: %d e: %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//}
//int  main() {
//	ShunXu();
//	return 0;
//}

















//void printarr(int*arr,int n) {
//	int* p = arr;
//	for (int i = 0; i < n; i++) {
//		printf("%d ", *p);
//		*p++;
//	}
//}
//int main() {
//	int arr1[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int num = sizeof(arr1) / sizeof(arr1[0]);
//	printarr(arr1,num);
//	return 0;
//}

//字符串逆序  作业内容:写一个函数，可以逆序一个字符串的内容。

//void Reversestr(char*str,int n) {
//	char*left = str;
//	char* right = (str + n - 1);
//	while (left<right) {
//		char tmp = *right;
//		*right = *left;
//		*left = tmp;	
//		left++,right--;
//	}	
//}
//int main() {
//	char str1[] = { "sdasduhiuhhivyugui" };
//	int num = sizeof(str1) / sizeof(str1[0]);
//	Reversestr(str1,num);
//	for (int i = 0; i < sizeof(str1) / sizeof(str1[0]);i++) {
//		printf("%c", str1[i]);
//	}
//	return 0;
//}


//
//计算求和
//作业内容
//求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，其中a是一个数字，
//例如：2 + 22 + 222 + 2222 + 22222
//int  sn(int a)
//{
//	int c = a;
//	int* p = &c;
//	int sum = 0;
//	int count = 5 ;
//	while (count) {
//		sum += *p;
//		*p = (*p * 10) + a;
//		count--;
//	}
//	return sum;
//}
//
//int main()
//{
//	printf("%d", sn(2));
//	return 0;
//}


//作业标题
//打印水仙花数
//作业内容
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。

//void ShuiXian(int a)
//{
//	int tmp = 10;
//	for (int i= 2; i <6; i++){
//		tmp *= 10;
//		for (int j = (tmp/10); j < tmp; j++) {
//			int sum = 0;
//			int a = 0;
//			int b = j;
//			while (b > 0) {			
//				a = b % 10;
//				sum += pow(a, i);
//				b = b/10;
//			}
//			if (sum == j) {
//				printf("%d  %d\n", j,i);
//			}
//		}
//	}	
//}
//
//int main()
//{
//	ShuiXian(100000);
//	return 0;
//}






//打印菱形
//void PrintDiamond(int n) 
//{	
//	int size = 2 * n + 1;
//	char str[32];
//	memset(&str, ' ', 32);
//	for (int i = 0; i < n; i++) {
//		str[n-i] = str[n+i] = '*';
//		for (int i = 0; i < size; i++) {
//			printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//
//	//for (int j = 0; j < n; j++) {
//	//	for (int i = 0; i < n - j; i++) {
//	//		str[i] = str[size - i] = ' ';
//	//	}
//	//}
//
//}

//int main()
//{
//	int n = 5;
//	int size = 2 * n + 1;
//	char str[32];
//	memset(&str, ' ', 32);
//	for (int i = 0; i < n; i++) {
//		str[n - i] = str[n + i] = '*';
//		for (int i = 0; i < size; i++) {
//			printf("%c", str[i]);
//		}
//		printf("\n");
//	}
//	/*PrintDiamond(5);*/
//	return 0;
//}






//int	SameBits(int x, int y) {
//	int count = 0;
//	int bit = 32;
//	while (bit) {
//		if ((x&1)==1 && (y&1)==1 ||\
//			(x|0)==0 && (y|0)==0) {    
//			count++;
//		}
//		x >>= 1;
//		y >>= 1;
//		bit--;
//	}
//	return  32-count;
//}
//
//
//int main()
//{
//	int x = 0;
//	int y = 0;
//	printf("输入比较的两个数\n");
//	scanf("%d %d", &x, &y);
//	printf("%d", SameBits(x, y));
//	return 0;
//}


//打印整数二进制的奇数位和偶数位
//
//作业内容
//获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void print(int x)
//{
//	printf("奇数二进制序列为：\n");
//	for (int i = 30; i >= 0; i = i - 2) {
//		if (((x >> i) & 1) == 1) {
//			printf(" 1");
//		}
//		else {
//			printf(" 0");
//		}
//
//	}
//
//	printf("\n偶数数二进制序列为：\n");
//	for (int i = 31; i >= 1; i = i - 2) {
//		if (((x >> i) & 1) == 1) {
//			printf("1 ");
//		}
//		else {
//			printf("0 ");
//		}
//	}
//}
//
//int main()
//{
//	print(25);
//	system("pause");
//	return 0;
//}
//
//void Printbit(int num)
//{
//	for (int i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//
//	for (int i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (num >> i) & 1);
//	}
//	printf("\n");
//}



//统计二进制中1的个数
//作业内容
//写一个函数返回参数二进制中 1 的个数。
//
//比如： 15    0000 1111    4 个 1
//int Bits(int x) {
//	int count = 0;
//	while (x) {
//		count++;
//		x = x & (x - 1);
//	}
//	return count;
//}
//int Bits1(int x) {
//	int count = 0;
//	for (int i = 0; i < 32; i++) {
//		if (x>>i  &  1) {
//			count++;
//		}
//	}
//	return count;
//}
//int main()
//{
//	printf("%d ", Bits(15));
//	printf("%d ", Bits1(255));
//
//	return 0;
//}



//交换两个变量（不创建临时变量）
//作业内容
//不允许创建临时变量，交换两个整数的内容

//void Swep(int* a, int* b) {
//	*a = *a ^ *b;
//	*b = *a ^* b;
//	*a = *a ^ *b;
//}
//int main()
//{
//	int x = 156;
//	int y = 3589;
//	Swep(&x, &y);
//	printf("%d %d", x, y);
//	return 0;
//}











#define SIZE  64

//void YangHui(int n)  //n 为杨辉三角行数
//{
//	int arr[SIZE] = {0};
//	int arr1[SIZE] = {0};
//
//	arr[n] = 1;
//	for (int i = 0; i < 2 * n + 1; i++) {     //打印第一行
//		if (0 == arr[i]) {
//			printf("  ");
//		}
//		else {
//			printf("%2d ", arr[i]);
//		}
//	}
//	printf("\n");
//
//
//	arr[n] = 2;
//	arr[n - 1] = arr[n + 1] = 1;  //第二行赋初始值
//	for (int i = 0; i < 2 * n + 1; i++) {     //打印第两行
//		if (0 == arr[i]) {
//			printf("  ");
//		}
//		else {
//			printf("%2d ", arr[i]);
//		}
//	}
//	printf("\n");
//
//	for (int i = 3; i <= n; i++) {
//		arr1[n] = arr[n]+arr[n + 1];
//		for (int j = 1; j <i ; j++) {
//			arr1[n - j] = arr1[n + j] =  arr[n -j + 1];
//		}
//
//		for (int i = 0; i < 2*n; i++) {     //打印每一行
//			if (0 == arr1[i]){
//				printf("  ");
//			}
//			else {
//				printf("%2d ", arr1[i]);
//			}
//		}
//		printf("\n");
//
//		for (int i = 0; i < SIZE; i++) {
//			arr[i] = arr1[i];
//		}		
//	}
//}


//void YanghuiTriangle(int n) 
//{	
//	if (n > 64) {
//		printf("输入值太大了,只打印前64行！");
//		return;
//	}
//	int arr1[SIZE] = { 0 };
//	int arr2[SIZE] = { 0 };
//
//	n = n+1;
//	arr2[0] = 1;
//	for (int i = 1; i <n; i++) {
//		for (int j = 1; j < i; j++) {	
//			arr2[j] = arr1[j] + arr1[j - 1];
//		}
//		for (int i = 0; i < n; i++) {     //打印每一行
//			if (0 == arr2[i]){
//				printf("");
//			}
//			else {
//				printf("%3d ", arr2[i]);
//			}
//		}
//		printf("\n");
//		for (int i = 0; i < n; i++) {
//			arr1[i] = arr2[i];
//		}	
//	}
//}
//int main()
//{
//	YanghuiTriangle(10);
//	return 0;
//}


//猜凶手
//日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
//以下为4个嫌疑犯的供词:
//A说：不是我。
//B说：是C。
//C说：是D。
//D说：C在胡说
//已知3个人说了真话，1个人说的是假话。
//现在请根据这些信息，写一个程序来确定到底谁是凶手

//void Judge(char X) 
//{
//
//	int arr[4] = { 0 };
//	int arr1[4] = { 0 };
//}
//
//int main()
//{
//	Judge();
//	return 0;
//}

//
//猜名次
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。

//int main()
//{
//	Guese();
//	return 0;
//}







//数组作业
//void* MaoPao(int arr[], int num) {
//	for (int i = 0; i < num - 1; i++) {
//			for (int j = 0; j < num - i - 1; j++) {
//				if (arr[j] > arr[j + 1]) {
//					int tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//				}
//			}
//	}
//	return arr;
//}
//
//int main() {
//
//	int arr1[] = {15,485,65,5,61,654,84,51,54,12,4,54,1,45,1 };
//	int num = sizeof(arr1) / sizeof(arr1[0]);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	MaoPao(arr1, num);
//	for (int i = 0; i < num; i++) {
//		printf("%d ", arr1[i]);
//	}
//	return 0;
//}
//


//
////创建一个整形数组，完成对数组的操作
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
// void init(int arr[], int size) {
//	for (int i = 1; i < size; i++) {
//		arr[i] = 0;
//	}
//}
//
//
//void print(int arr[], int  size) {
//	for (int i = 1; i < size; i++) {
//		printf("%d ",arr[i]);
//	}
//	printf("\n");
//}
//
//void reverse(int arr[], int  size) {
//	for (int i = 0; i <= (size) / 2; i++) {
//		int tmp = arr[size-1-i];
//		arr[size - 1 - i] = arr[i];
//		arr[i] = tmp;
//	}
//}
//
//int main() {
//	int arr[] = { 5,2,4,97,46,9,5,87,125,52,5,42,54,54,57 };
//	int size = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr, size);
//	print(arr, size);
//	init(arr, size);
//	print(arr, size);
//	return 0;
//}



////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void Sweparr(char* str1, char* str2,int size) {
//	for (int i = 0; i < size; i++) {
//		char tmp = ' ';
//		tmp = str1[i];
//		str1[i] = str2[i];
//		str2[i] = tmp;
//	}
//}
//int main()
//{
//	char str1[] = "hjkhgdsgfjghjh";
//	char str2[] = "ojkjkjhjkybhko";
//	int num = sizeof(str1) / sizeof(str1[0]);
//
//	Sweparr(str1, str2, num);
//	for (int i = 0; i < num; i++) {
//		printf("%c", str1[i]);
//	}
//	printf("\n");
//	for (int i = 0; i < num; i++) {
//		printf("%c", str2[i]);
//	}
//
//	return 0;
//}







//////整形qsort
//int int_cmp(const void* p1, const void* p2){
//	return *((int*)p1)- *((int*)p2);
//}
////字符串qsort
//int str_cmp(const void* p1, const void* p2) {
//	const char* a = *(const char**)p1;
//	const char* b = *(const char**)p2;
//	return strcmp(a, b);
//}
////字符
//int  char_cmp(const void* p1, const void* p2) {
//	return *(char*)p1 - *(char*)p2;
//}
//
////double
//int  double_cmp(const void* p1, const void* p2) {
//	return  *(double*)p1 > * (double*)p2 ? 1 : -1;
//}
//
//int  float_cmp(const void* p1, const void* p2) {
//	return  *(float*)p1 > * (float*)p2 ? 1 : -1;
//}
//int main()
//{	
//	float arr2[]= { 9.254,3.265,10.21,9.21,69.02,35.987 };
//	int n = sizeof(arr2) / sizeof(arr2[0]);
//	qsort(arr2, n, sizeof(float), float_cmp);
//	for (int i = 0; i < n; i++) {
//		printf("%f \n", arr2[i]);
//	}
//	return 0;
//}


//冒泡排序
//void s_wap(void* p1, void* p2, int size) {
//	for (int i = 0; i < size; i++) {
//		char tmp = *((char*)p1+i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* arr, int n, int size, int (*cmp)(const void*, const void*)) {
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < n - i - 1; j++) {
//			if (cmp((char*)arr + j * size, (char*)arr + (j + 1) * size) > 0) {
//				s_wap((char*)arr + j * size, (char*)arr + (j + 1) * size, size);
//			}
//		}
//	}
//}
//int main()
//{	
//	const char *arr3[]= { "sajdi","sdhy","sadfa","sbbdksa","sadfadx" };
//	/*int arr3[] = { 96,215,14,35,2,622,5,45,141,68,32 };*/
//	int n = sizeof(arr3) / sizeof(arr3[0]);
//
//	bubble(arr3, n, sizeof(int), int_cmp);
//
//	for (int i = 0; i < n; i++) {
//		printf("%s ", arr3[i]);
//	}
//	printf("\n");
//	return 0;
//}


//
//字符串旋转结果
//写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
//例如：给定s1 = AABCD和s2 = BCDAA，返回1
//给定s1 = abcd和s2 = ACBD，返回0.
//AABCD左旋一个字符得到ABCDA
//AABCD左旋两个字符得到BCDAA
//AABCD右旋一个字符得到DAABC


//int Judge_Revolve(const char* arr1,const char * arr2) {
//	if (0 == (strcmp(arr1, arr2))){
//		printf("翻转后两字符串相同\n");
//		return 1;	
//	}
//	printf("翻转后两字符串不同\n");
//	return 0;
//}

//int Judge_Revolve(char* arr1,char* arr2,int size,char*(Revo)(char*,int ,int ))
//{
//	arr2 = Revo(arr2,size,size);
//	if (0 == (strcmp(arr1, arr2))) {
//		printf("翻转后两字符串相同\n");
//		return 1;
//	}
//	printf("翻转后两字符串不同\n");
//	return 0;
//}
//char* Revolve(char* p, int size, int num) { 
//	for (int i = 0; i < num; i++) {
//		char tmp = *p;
//		for (int i = 0; i < size-1; i++) {
//			p[i] = p[i + 1];
//		}
//		p[size - 1] = tmp;
//	}
//	return p;
//}
//
//int main()
//{
//	char arr[] = { "AABCD" };	
//	int size = sizeof(arr) / sizeof(arr[0]);
//	size--;
//	Revolve(arr, size, 2);        //arr翻转前两个字母  size为字符串元素个数；
//	for (int i = 0; i < size; i++) {
//		printf("%c", arr[i]);
//	}
//	printf("\n");
//
//	char s1[] = { "ABCD" };
//	char s2[] = { "abcd" };
//	int size1 = (sizeof(s1) / sizeof(s1[0])) - 1;	
//	Judge_Revolve(s1, s2,size1,Revolve);
//	return 0;
//}
//

//字符串左旋
//实现一个函数，可以左旋字符串中的k个字符。
//ABCD左旋一个字符得到BCDA
//ABCD左旋两个字符得到CDAB






//
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于O(N);

//int Findnum(int arr[][4], int row,int num)
//{
//	int flag = 0;
//	for (int i = 0; i < row;) {
//		if (num == arr[i][row-1]) {
//			printf(" %d在第%d行第4列\n",num, i+1);
//			flag = 1;
//			return 0;
//		}
//		if (num > arr[i][row-1]) {
//			i++;
//		}
//		for (int j = row-2; j >= 0; j--) {
//			if (num == arr[i][j]) {
//				printf("%d在第%d行第%d列\n", num,i+1, j+1);
//				flag = 1;
//				return 0;
//			}
//		}		
//	}
//	if (flag) {
//		printf("%d不在矩阵中\n", num);
//	}
//	return 0;
//}
//int main()
//{	
//	int arr[][4] = {	
//		{1,2,5,9},
//		{2,3,6,12},
//		{4,10,11,14},
//		{6,12,15,19}};
//	Findnum(arr, 4, 1);
//	return 0;
//}






//main() {
//	int a = 1;
//	int i = 0;
//	double sum = 1;
//	for (i = 2; i < 101; i++) {
//		sum -= 1/i;
//	}
//	printf("%d\n", sum);
//}
//


//计算n的阶乘
//int jiecheng(int n) {
//	int a = 1;
//	int i = 1;
//
//	for (i = 1; i < n + 1; i++) {
//		a *= i;
//	}
//	return a;
//}
//
//
//
////2. 计算 1!+ 2!+ 3!+ …… + 10!
//int main() {
//	int sum = 0;
//	int i = 1;
//	for (i = 1; i < 11; i++) {
//		sum += jiecheng(i);
//	}
//	printf("%d\n", sum);
//	return 0;
//}


//int binsearch( int n) {
//		int  i = 0;	
//		int v[50];
//		for (i = 0; i <=50; i++) {
//			v[i] = i;
//		}
//		for (i = 0; i <= 50; i++) {
//			if (n == v[i]) {
//				printf("%d\n   v[%d]", v[i],i);
//				break;
//			}
//			else {
//				if (i == 50) {
//					printf("%d不在v[]中\n", n);
//				}
//			
//			}
//		}
//		return 0;
//}
//
//
//
//int main() {
//	binsearch(30);
//	return 0;
//}


//int main() {
//	int i = 0;
//	while (1) {
//		i++;
//		if (0 == i % 9) {
//			printf("%d\n", i);
//		}
//		if(i > 100) 
//		{
//		break;
//		}
//	}
//}



//int main() {
//	int  a = 1;
//	int i = 0;
//	double sum = 1;
//	for (i = 2; i < 101; i++) {
//		if (0 == i % 2) {
//			sum -= 1.0 / i;
//		}
//		else {
//			sum += 1.0/ i;
//		}
//		
//	}
//	printf("%lf\n", sum);
//	return 0;
//	
//}

//
//int main() {
//	int arr[20];
//	int i = 0;
//	int j = 0;
//	printf("依次输入十个数比大小");
//	for (i = 0; i < 10; i++) {
//		scanf("%d \n", &arr[i]);
//	}
//	int arr2[1];
//	for (i = 0; i < 10; i++) {
//		for (j = i+1; j < 10; j++) {
//			if (arr[i] < arr[j]) {
//				arr2[0] = arr[j];
//				arr[j] = arr[i];
//				arr[i] = arr2[0];
//			}
//		}
//	}
//	for (i = 0; i < 10; i++) {
//		printf("%d  ", arr[i]);
//
//	}
//	return 0;
//}


//
//int main() {
//	int i = 0; int j = 0;
//	for (i =1 ; i < 10; i++) {
//		for (j= 1; j < i+1; j++) {	
//				printf("%d x %d = %d   ", i, j, i * j);	
//		}
//		printf("\n");
//	}
//	return 0;
//}