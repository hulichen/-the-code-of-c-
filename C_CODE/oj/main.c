#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<stdio.h>
#include<windows.h>
#include<stdbool.h>
#pragma warning(disable:4996)
//int canConstruct(char* ransomNote, char* magazine) {
//    int arr1[2] = { 0 };
//    int arr2[2] = { 0 };
//    int* ret = 1;
//    int i = 0, j = 0;
//    while (i < strlen(ransomNote)) {
//        int a = (int)ransomNote[i] - 'a';
//        arr1[a] += 1;
//        i++;
//    }
//    while (j < strlen(magazine)) {
//        int a = (int)magazine[j] - 97;
//        arr2[a] += 1;
//        j++;
//    }
//
//    for (int k = 0; k < 2; k++) {
//        int a = arr2[k] - arr1[k];
//        if (a < 0) {
//            ret = 0;
//            break;
//        }
//    }
//    return ret;
//
//
//
//
//
//
//
//
//
//}
//int main() {
//    char ransomNote[] = "aa";
//    char magazine[] = "aab";
//    int a = canConstruct(&ransomNote, &magazine);
//    printf("%d", a);
//
//    return  0;
//}


//void  _swap(int* a, int* b) {
//    int tmp = *a;
//    *a = *b;
//    *b = tmp;
//}
//int partion1(int* nums, int left, int right) {
//    int low = left;
//    int high = right;
//    int key = nums[low];
//    while (low < high) {
//        while (low<high && nums[high]>key) {
//            high--;
//        }
//        _swap(&nums[high], &nums[low]);
//        while (low < high && nums[low] < key) {
//            low++;
//        }
//        _swap(&nums[high], &nums[low]);
//    }
//    return low;
//}
//
//int partion2(int* nums, int left, int right) {
//    int key = nums[left];
//    int pos = left;
//    for (int i = pos + 1; i <= right; i++) {
//        if (nums[i] < key) {
//            pos++;
//            if (i != pos) {
//                _swap(&nums[i], &nums[pos]);
//            }
//        }
//    }
//    _swap(&nums[left], &nums[pos]);
//    return pos;
//}
//void Quicksort(int* nums, int left, int right) {
//    if (left >= right)
//        return;
//    int k = partion2(nums, left, right);
//    Quicksort(nums, left, k - 1);
//    Quicksort(nums, k + 1, right);
//}
//
//
//void  Shellsort(int* nums, int left, int right) {
//     int gap = right+1;
//     while(gap>1){
//         gap = gap/3 + 1;
//         for(int i = left+gap;i<=right;i++){
//            if(nums[i]<nums[i-gap]){
//                 int  tmp = nums[i];
//                 int j = i;
//                 while(j>left && tmp<nums[j-gap]){
//                     nums[j]=nums[j-gap];
//                     j = j-gap;
//                 }
//                nums[j]= tmp;
//             }
//         }
//     }
//}
//
//
//
//void _adjustdowm(int* nums, int left, int right,int start) {   //大堆向小调整
//    int i = start;
//    int  j = 2 * i + 1;   //左树
//    int tmp = nums[i];
//    while (j <= right) {
//        if (j<right    &&  nums[j] < nums[j + 1])
//            j++;
//        if (tmp < nums[j]) {
//            nums[i] = nums[j];
//            i = j;
//            j = 2 * i + 1;
//        }
//        else {
//            break;
//        }
//    }
//    nums[i] = tmp;
//}
//
//void Heapsort(int* nums, int left, int right) {
//    //int curpos = right;
//    int curpos = (right - 1 )/2;
//    while (curpos >= 0) {
//        _adjustdowm(nums, left, right, curpos);
//        curpos--;
//    }
//    int k = right;
//    while (k >= 0) {
//        _swap(&nums[k], &nums[0]);       
//        _adjustdowm(nums, left, k-1, 0);
//        k--;       
//    }
//}
//
//
//void sortArray(int* nums, int numsSize) {
//    printf("Heapsort ");
//    Heapsort(nums, 0, numsSize - 1);
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    } 
//    printf("\n");
//
//
//    printf("Shellsort ");
//    Shellsort(nums, 0, numsSize - 1);
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    }
//    printf("\n");
//
//    printf("Quicksort ");
//    Quicksort(nums, 0, numsSize - 1);
//    for (int i = 0; i < numsSize; i++) {
//        printf("%d ", nums[i]);
//    }
//}
//
//
//void plusOne(int* digits, int digitsSize, int returnSize) {
//
//    if (digits[digitsSize - 1] + 1 > 9) {
//        for (int i = digitsSize - 1; i >= 0; i++) {
//            if (digits[i] == 9) {
//                digits[i] += 1;
//                if (i > 0)
//                    digits[i] %= 10;
//            }
//            else
//                digits[i] += 1;
//            break;
//        }
//        if (digits[0] == 10) {
//            int *ddd = (int*)calloc(digitsSize + 1,sizeof(int));
//            digitsSize++;
//            ddd[0] = 1;
//            digits = ddd;
//            returnSize++;
//        }
//    }
//    else {
//        digits[digitsSize - 1] += 1;
//    }
// 
//
//
//    for (int i = 0; i < returnSize; i++) {
//        printf("%d ", digits[i]);
//    }
//
//}
//
//
//int thirdMax(int* nums, int numsSize) {
//    int x = INT_MIN ;
//    int arr[] = { x,x,x };
//    int i = 0;
//    int count = 0;
//    int flag = 1;
//    while (i < numsSize) {
//        
//        if (arr[0] == nums[i] || arr[1] == nums[i] || arr[2] == nums[i] )
//        {
//            
//            if (nums[i] ==x && x==arr[2] &&flag) {
//                flag = 0;
//                count++;
//            }
//            i++;
//            continue;
//        }
//
//        for (int j = 2; j >=0; j--) {
//            if (nums[i] > arr[j] ) {
//                count++;
//                arr[j] = nums[i];
//                int tmp = arr[j];
//                int k = j;
//                while (k > 0 && tmp > arr[k-1]) {
//                    arr[k] = arr[k - 1];
//                    k--;
//                }
//                arr[k] = tmp;
//                break;
//
//            }
//        }
//        i++;
//    }
//    if (arr[2] == x && count <3) {
//        return arr[0];
//    }
//    return arr[2];
//  
//}
//
//
//int  main() {
//    int nums[] = { 1,1,INT_MIN};
//    int  n = sizeof(nums)/sizeof( nums[0]);
//    int returnSize = n;
//    int k = thirdMax(nums, n);
//    printf("\n %d\n", k);
//    return   0;
//}