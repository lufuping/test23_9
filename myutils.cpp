#include<iostream>
#include<cstring>
#include<time.h>
#include "myutills.h"

void fun1() {
	int input = 0, iou = 0, iji = 0, input2 = 0, input1 = 0, sum = 0;
	std::cout << "请输入你想输入的整数(输入0则结算并退出)：";
A:
	std::cout << " ";
	std::cin >> input;
	if (sum == 0 && input != 0) {
		std::cout << "输入0退出:";
	}
	while (input)
	{
		// 判断是否为奇数
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
	std::cout << "你输入的偶数个数是：" << iou << "  奇数个数是：" << iji << std::endl;
	std::cout << "你总共输入了 " << sum << " 个数，" << "你输入的偶数个数和的平均数是：" << double(input2) / iou << "  奇数个数和的平均数是：" << double(input1) / iji << std::endl;
}

void fun2(int ia)
{
	// ib：用来做arr_ia的数组下标
	int ib = 1;
	int arr_ia[1000] = { 0 };// arr_ia 用来存储生成的随机数的重复数,下标为随机数的值
	while (ia) {
		// 生成随机数
		srand(time(NULL));
		// 确定随机数的范围
		int min = 1;
		int max = 1000;
		// randomNum 接受生成的随机数
		int randomNum = rand() % (max - min + 1) + min;
		// 去重
		// 记录重复的数的出现次数
		arr_ia[randomNum]++;
		//printf("这次的随机数是：%d\n", randomNum);
		ia--;
	}
	// 完成去重 ，打印输出值>1的下标
	for (ib;ib <= 1000;ib++) {
		if (arr_ia[ib] > 0) {
			printf("%d\n", ib);
		}
	}
}

int* bubbleSort(int* arr, int size)
{
	// 给arr 申请内存空间
	int* res = (int*)malloc(size * sizeof(int));
	// 保证申请到内存空间
	if (!res) {
		return NULL;
	}
	// 复制数组
	int ic = 0; // 复制数组时的计数器
	for (ic;ic < size;ic++) {
		res[ic] = *arr;
		arr++;
	}
	int i = 0; // 做第一次遍历数组的计数器
	int ia = 0; // 做数组交换的缓存空间
	int j = size - 1; // 总的要调换的次数
	for (j;j > 0;j--) {
		// 进行第一次调换
		for (i=0;i < size - 1;i++) {
			// 如果前者大则和后者交换位置
			if (res[i] > res[i + 1]) {
				// 把小的先存入缓存
				ia = res[i + 1];
				// 实现交换
				res[i + 1] = res[i];
				res[i] = ia;
				size - 1;
			}
		}
	}

	return res;
}