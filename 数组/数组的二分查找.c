#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
  ���ֲ��ң������������ 
*/ 

void main() {

	int a[1024];
	for (int i = 0; i < 1024; i++)
	{
		a[i] = i;

	}
	printf("%p", a);// ��ӡ��ַ

	int num = 333; // ����num
	int shang = 0; // �����һ���±�
	int xia = 1023; // �������һ���±�
	int zhong;
	while (shang < xia)
	{
		zhong = (shang + xia) / 2; // ȡ�м�ֵ
		printf("\nshang=%d,zhong=%d,xia=%d\n",shang,zhong,xia);
		if (num == a[zhong])
		{
			printf("�ҵ���");
			break;// ����ѭ��

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

	time_t ts; // ʱ�����������
	unsigned int num = time(&ts);// ��ȡʱ�䣬ת��Ϊ����
	srand(num); // ��ʼ�����������

	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;// ȡ������޶�100����
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