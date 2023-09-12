#include<iostream>
#include<cstring>
#include "myutills.h"

int main() {
    // 监听用户输入要排序的内容
    /*printf("请给输入要排序的整数数组(最多32个，输入Ctrl + D结束输入)：");
    int im = 0;*/
    int arr[] = { 3,6,2,5,1,4}; // 存放用户的输入
    //int i = 0; // 用户输入个数的计数器
    //while (scanf_s("%d", &im) != EOF && i < 32) {
    //    arr[i] = im;
    //    i++;
    //}
    int size = sizeof(arr) / sizeof(int);
    // 调用冒泡排序函数
    int* res = fastSort(arr, size);
    int ia = 0;
    printf("排序之后的新数组是：");
    for (ia = 0;ia < size;ia++) {
        if (res[ia]) {
            printf("%d  ", res[ia]);
        }
    }
    // 释放申请的资源
    free(res);
	return 0;
}