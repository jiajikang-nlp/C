/*

����⣺
		����һ������Ϊn���б� A ���빹��һ������Ϊn���б� B ��
		����B�е�Ԫ��:
		B[i]=A[0] A[1] ...  A[i-1] A[i+1]... A[n-1]��
		Ҫ����ʹ�ó�����
		���磬����һ������Ϊ5���б� A=[1, 2, 3, 4, 5]
˼·��
	   B[i]=A[0]*A[1]*...*A[i-1]*A[i+1]*...*A[n-1]
	   ��һ��������A[0]*A[1]*...A[i]
	   �ڶ������س���A[i-1]*A[i+1]*...*A[n-1]
�ο����ӣ�https://blog.csdn.net/Rebirth_Love/article/details/51612096

*/
#include<stdlib.h>
#include <stdio.h>
#include <string.h>
#define LENGTH 5
//#define LEN(x) sizeof(x) / sizeof(x[0]) // �������鳤��


void main() {

	int a[] = { 1, 2, 3, 4, 5 };
	//int length = sizeof(a) / sizeof(int);
	//printf("%d",length);
	 

	int d[LENGTH];
	int c[LENGTH];
	int b[LENGTH];

	d[0] = 1; // ����d
	for (int i = 1; i < LENGTH; i++)
	{
		d[i] = d[i - 1] * a[i - 1];
	}

	c[5 - 1] = 1;// ����c
	for (int j = LENGTH - 1; j > 0; j--)
	{
		c[j - 1] = c[j] * a[j];
	}


	// ����b
	for (int i = 0; i < LENGTH - 1; i++)
	{
		b[i] = d[i] * c[i];
	}

	for (int i = 1; i < LENGTH; i++)
	{ 
		printf("%d",b[i]);
	}
 

}