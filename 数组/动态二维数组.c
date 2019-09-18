#include <stdio.h>
#include <stdlib.h>

// 非连续矩阵
// 手动输入x，y，创建一个动态数组p[x][y]
// 从0开始初始化，一直初始化到p[x-1][y-1]这个元素，一直递增

void main() {

	int x, y;
	scanf_s("%d%d", &x, &y);// 初始化x，y横纵坐标

	// 二级指针可以存储指针数组的地址
	// 动态分配一片内存，存放指针数组，每一个元素都是一个地址
	// 然后将指针数组的首地址传递给pp保存
	int **pp = malloc(sizeof(int*)*x); // 指向指针的指针
	for (int i = 0; i < x; i++)
	{

		// 分配内存，有多少列，一维数组
		// 每个指针都存储这样一片内存的地址
		pp[i] = malloc(sizeof(int)*y);
 
	}


	//  赋值
	int num = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			pp[i][j] = num;// *(*(pp+i) +j) 等价
			// *(*(pp + i) + j) = num;
			num++;
			printf("%4d",pp[i][j]); // 打印
		}

		printf("\n");// 换行
	}

	// 释放内存
	for (int i = 0; i < x; i++)
	{
		free(pp[i]);
	}

	free(pp);

	system("pause");


}


// 手动输入x，y，创建一个动态数组p[x][y]
// 从0开始初始化，一直初始化到p[x-1][y-1]这个元素，一直递增

// 二、动态数组
void main7() {
	int x, y;
	scanf_s("%d%d",&x,&y);// 初始化x，y，8*9二维数组
	void *p = malloc(sizeof(int)*x*y); // 分配内存，连续的内存 ：必须是常数指定的
	// y必须是一个已知的常量，才能将这片内存当做一个二维数组来使用

	int(*px)[9] = p; // 
	int num = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			px[i][j] = num;
			num++;
			printf("%4d",px[i][j]);
		}
		printf("\n");
	}


	system("pause");


}




//三、静态二维数组
void main6(){

	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*p)[4] = a; // 创建一个指针，存储二维数组的首地址
	// 一个指向有四个元素的一维数组的指针
	//打印二维数组内容
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", a  [i][j]);

		}
		printf("\n");
	}
	// 打印内容还有地址
	for (int *p = &a[0][0]; *p < &a[0][0]; p++)
	{
		printf("\n%d,%p",*p,p);

	}
	// 

	system("pause");

	


}