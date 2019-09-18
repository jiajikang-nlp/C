#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

	time_t ts; // 设置时间变量
	srand((unsigned int )time(&ts)); // 设置时间的随机数种子

	int a[10];

	for (int i = 0; i < 10; i++)// 循环初始化数组
	{
		a[i] = rand() % 100; // 取随机数在0-99范围内
		printf("\n%d,%x",a[i],&a[i]); // 打印数值以及地址
	}


	int all = 0;// 和
	double total = 0.0;// 平均值实数
	for (int i = 0; i < 10; i++)
	{
		all += a[i]; // 累加

	}
	
	total = all; // 先让平均值等于所有数之和
	total /= 10;// 除法
	printf("和=%d,平均值=%f",all,total);



	system("pause");

}