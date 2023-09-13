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
    int pivot = arr[low]; // ѡ���һ��Ԫ��Ϊ��׼Ԫ��
    int i = low + 1; // ���ָ��
    int j = high; // �ұ�ָ��

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
        // ѡ���׼Ԫ��
        int pivot = partition(arr, low, high);

        // �ݹ��������������
        quickSort(arr, low, pivot - 1);

        // �ݹ������ұ�������
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
//    // �����û�����Ҫ���������
//    /*printf("�������Ҫ�������������(���32��������Ctrl + D��������)��");
//    int im = 0;*/
//    int arr[] = { 3,6,2,5,1,4}; // ����û�������
//    //int i = 0; // �û���������ļ�����
//    //while (scanf_s("%d", &im) != EOF && i < 32) {
//    //    arr[i] = im;
//    //    i++;
//    //}
//    int size = sizeof(arr) / sizeof(int);
//    // ���ÿ���������
//    int* res = fastSort(arr,0, size);
//    int ia = 0;
//    printf("����֮����������ǣ�");
//    for (ia = 0;ia < size;ia++) {
//        if (res[ia]) {
//            printf("%d  ", res[ia]);
//        }
//    }
//    // �ͷ��������Դ
//    free(res);
//	return 0;
//}

