#include<iostream>
#include<cstring>
#include "myutills.h"

int main() {
    // �����û�����Ҫ���������
    /*printf("�������Ҫ�������������(���32��������Ctrl + D��������)��");
    int im = 0;*/
    int arr[] = { 3,6,2,5,1,4}; // ����û�������
    //int i = 0; // �û���������ļ�����
    //while (scanf_s("%d", &im) != EOF && i < 32) {
    //    arr[i] = im;
    //    i++;
    //}
    int size = sizeof(arr) / sizeof(int);
    // ����ð��������
    int* res = fastSort(arr, size);
    int ia = 0;
    printf("����֮����������ǣ�");
    for (ia = 0;ia < size;ia++) {
        if (res[ia]) {
            printf("%d  ", res[ia]);
        }
    }
    // �ͷ��������Դ
    free(res);
	return 0;
}