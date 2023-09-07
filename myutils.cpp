#include<iostream>
#include<cstring>

void fun1() {
	int input = 0, iou = 0, iji = 0, input2 = 0, input1 = 0, sum = 0;
	std::cout << "请输入你想输入的整数(输入0则结算并退出)：";
A:
	std::cout << " ";
	std::cin >> input;
	if (sum == 0) {
		std::cout << "你输入的数是:\n";
	}
	while (input)
	{
		if (sum == 0) {
			std::cout << input;
		}

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