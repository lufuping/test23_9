#include<iostream>
#include<cstring>

void fun1() {
	int input = 0, iou = 0, iji = 0, input2 = 0, input1 = 0, sum = 0;
	std::cout << "�������������������(����0����㲢�˳�)��";
A:
	std::cout << " ";
	std::cin >> input;
	if (sum == 0) {
		std::cout << "�����������:\n";
	}
	while (input)
	{
		if (sum == 0) {
			std::cout << input;
		}

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