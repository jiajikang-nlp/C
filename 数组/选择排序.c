#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {
	time_t ts;
	unsigned int randdata = time(&ts); // 获取时间，然后转换为一个整数
	srand(randdata);// 设置随机数种子
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;// 瑞数组元素接收0-99 的随机数
		printf("\n%d,%x", a[i], &a[i]);

	}

	int max; // 表示最大数的下标
	max = 0; // 假定a[0]最大
	for (int i = 1; i < 10; i++)
	{

		if (a[i] > a[max])
		{
			printf("\n%d,%d,%d,%d", i, max, a[i], a[max]);
			max = i;

		}
	}

	printf("\n极大值%d", a[max]);

	// 实现从小到大排序
	for (int i = 0; i < 9; i++)
	{
		int min = i; // 假定当前数是最小数
		for (int j = i + 1; j < 10; j++) {

			if (a[j] < a[min])
			{
				min = j;

			}
		}
		if (min !=i)
		{
			int t = a[min];
			a[min] = a[i];
			a[i] = t;//数据交换

		}

	}

    printf("\n排序以后");
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ",a[i]);

	}

	system("pause");

}