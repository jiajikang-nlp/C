#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {

	time_t ts; // ����ʱ�����
	srand((unsigned int )time(&ts)); // ����ʱ������������

	int a[10];

	for (int i = 0; i < 10; i++)// ѭ����ʼ������
	{
		a[i] = rand() % 100; // ȡ�������0-99��Χ��
		printf("\n%d,%x",a[i],&a[i]); // ��ӡ��ֵ�Լ���ַ
	}


	int all = 0;// ��
	double total = 0.0;// ƽ��ֵʵ��
	for (int i = 0; i < 10; i++)
	{
		all += a[i]; // �ۼ�

	}
	
	total = all; // ����ƽ��ֵ����������֮��
	total /= 10;// ����
	printf("��=%d,ƽ��ֵ=%f",all,total);



	system("pause");

}