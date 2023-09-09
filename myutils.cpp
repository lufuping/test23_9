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