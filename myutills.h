#pragma once
// 传入一个整数，打印出这个整数的偶数个数和奇数及各个的平均值
void fun1();

/*
生成了NN个1到500之间的随机整数。请你删去其中重复的数字，
即相同的数字只保留一个，把其余相同的数去掉，
然后再把这些数从小到大排序，按照排好的顺序输出。
数据范围： 1≤n≤1000  ，
输入的数字大小满足 1≤val≤500
*/
/*
变量ia : 要生成的随机数个数
*/
void fun2(int ia);

// 快速排序
void quickSort(int arr[], int low, int high);
void printArray(int arr[], int size);