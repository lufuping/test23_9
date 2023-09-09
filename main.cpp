#include<iostream>
#include<cstring>
#include "myutills.h"

int main() {
	// ia 用户输入的控制生成随机数的个数
	int ia = 0;
	std::cout << "请输入：";
	std::cin >> ia;
	fun2(ia);
	return 0;
}