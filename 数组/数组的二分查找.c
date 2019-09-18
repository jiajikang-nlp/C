#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  二分查找：必须是有序的 
*/ 

void main() {

	int a[1024];
	for (int i = 0; i < 1024; i++)
	{
		a[i] = i;

	}
	printf("%p", a);// 打印地址

	int num = 333; // 查找num
	int shang = 0; // 数组第一个下标
	int xia = 1023; // 数组最后一个下标
	int zhong;
	while (shang < xia)
	{
		zhong = (shang + xia) / 2; // 取中间值
		printf("\nshang=%d,zhong=%d,xia=%d\n",shang,zhong,xia);
		if (num == a[zhong])
		{
			printf("找到了");
			break;// 跳出循环

		}
		else if (num > a[zhong])
		{
			shang = zhong + 1;
			

		}
		else // num <a[zhong]
		{
			xia = zhong - 1;
		}

	}

	getchar();

}


void main1() {

	time_t ts; // 时间的数据类型
	unsigned int num = time(&ts);// 获取时间，转换为整数
	srand(num); // 初始化随机数种子

	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;// 取随机数限定100以内
		printf("a[%d]=%d\n", a[i], a[i]);

	}
	for (int j = 0; j < 10; j++)
	{
		if (a[j] == 4)
		{
			printf("find");
			break;
		}
	}
	getchar();

}