#include<iostream>
#include<cstring>
#include "myutills.h"

/*
#include <stdio.h>

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int arr[], int low, int high) {
    int pivot = arr[low]; // 选择第一个元素为基准元素
    int i = low + 1; // 左边指针
    int j = high; // 右边指针

    while (i <= j) {
        if (arr[i] <= pivot) {
            i++;
        } else if (arr[j] > pivot) {
            j--;
        } else {
            swap(&arr[i], &arr[j]);
            i++;
            j--;
        }
    }

    swap(&arr[low], &arr[j]);
    return j;
}

void quickSort(int arr[], int low, int high) {
    if (low < high) {
        // 选择基准元素
        int pivot = partition(arr, low, high);

        // 递归排序左边子数组
        quickSort(arr, low, pivot - 1);

        // 递归排序右边子数组
        quickSort(arr, pivot + 1, high);
    }
}

void printArray(int arr[], int size) {
    for(int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
*/
int main() {
    int arr[] = {5, 2, 4, 1, 3};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original array: ");
    printArray(arr, size);

    quickSort(arr, 0, size - 1);

    printf("Sorted array: ");
    printArray(arr, size);

    return 0;
}

//int main() {
//    // 监听用户输入要排序的内容
//    /*printf("请给输入要排序的整数数组(最多32个，输入Ctrl + D结束输入)：");
//    int im = 0;*/
//    int arr[] = { 3,6,2,5,1,4}; // 存放用户的输入
//    //int i = 0; // 用户输入个数的计数器
//    //while (scanf_s("%d", &im) != EOF && i < 32) {
//    //    arr[i] = im;
//    //    i++;
//    //}
//    int size = sizeof(arr) / sizeof(int);
//    // 调用快速排序函数
//    int* res = fastSort(arr,0, size);
//    int ia = 0;
//    printf("排序之后的新数组是：");
//    for (ia = 0;ia < size;ia++) {
//        if (res[ia]) {
//            printf("%d  ", res[ia]);
//        }
//    }
//    // 释放申请的资源
//    free(res);
//	return 0;
//}

