#include<iostream>
#include<cstring>
#include<time.h>
#include "myutills.h"

void fun1() {
	int input = 0, iou = 0, iji = 0, input2 = 0, input1 = 0, sum = 0;
	std::cout << "�������������������(����0����㲢�˳�)��";
A:
	std::cout << " ";
	std::cin >> input;
	if (sum == 0 && input != 0) {
		std::cout << "����0�˳�:";
	}
	while (input)
	{
		// �ж��Ƿ�Ϊ����
		if (input % 2) {
			iji++;
			input1 == 0 ? input1 = input : input1 += input;
		}
		else {
			iou++;
			input2 == 0 ? input2 = input : input2 += input;
		}
		sum++;
		goto A;
	}
	std::cout << "�������ż�������ǣ�" << iou << "  ���������ǣ�" << iji << std::endl;
	std::cout << "���ܹ������� " << sum << " ������" << "�������ż�������͵�ƽ�����ǣ�" << double(input2) / iou << "  ���������͵�ƽ�����ǣ�" << double(input1) / iji << std::endl;
}

void fun2(int ia)
{
	// ib��������arr_ia�������±�
	int ib = 1;
	int arr_ia[1000] = { 0 };// arr_ia �����洢���ɵ���������ظ���,�±�Ϊ�������ֵ
	while (ia) {
		// ���������
		srand(time(NULL));
		// ȷ��������ķ�Χ
		int min = 1;
		int max = 1000;
		// randomNum �������ɵ������
		int randomNum = rand() % (max - min + 1) + min;
		// ȥ��
		// ��¼�ظ������ĳ��ִ���
		arr_ia[randomNum]++;
		//printf("��ε�������ǣ�%d\n", randomNum);
		ia--;
	}
	// ���ȥ�� ����ӡ���ֵ>1���±�
	for (ib;ib <= 1000;ib++) {
		if (arr_ia[ib] > 0) {
			printf("%d\n", ib);
		}
	}
}

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
		}
		else if (arr[j] > pivot) {
			j--;
		}
		else {
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
	for (int i = 0; i < size; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");
}