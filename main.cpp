#include<iostream>
#include<cstring>
#include "myutills.h"

int main() {
	// ia �û�����Ŀ�������������ĸ���
	/*int ia = 0;
	std::cout << "�����룺";
	std::cin >> ia;*/
	//fun2(ia);
	int arr[] = {1,2,1,3,4,5,3,4,0,4,6,9,23,44,21,444,22,1,54};
	int size = sizeof(arr) / sizeof(int);
	int* newArr = bubbleSort(arr, size);
	for (int i = 0;i < size;i++) {
		std::cout<<newArr[i]<<" ";
	}
	
	return 0;
}