#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void main() {
	time_t ts;
	unsigned int randdata = time(&ts); // ��ȡʱ�䣬Ȼ��ת��Ϊһ������
	srand(randdata);// �������������
	int a[10];
	for (int i = 0; i < 10; i++)
	{
		a[i] = rand() % 100;// ������Ԫ�ؽ���0-99 �������
		printf("\n%d,%x", a[i], &a[i]);

	}

	int max; // ��ʾ��������±�
	max = 0; // �ٶ�a[0]���
	for (int i = 1; i < 10; i++)
	{

		if (a[i] > a[max])
		{
			printf("\n%d,%d,%d,%d", i, max, a[i], a[max]);
			max = i;

		}
	}

	printf("\n����ֵ%d", a[max]);

	// ʵ�ִ�С��������
	for (int i = 0; i < 9; i++)
	{
		int min = i; // �ٶ���ǰ������С��
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
			a[i] = t;//���ݽ���

		}

	}

    printf("\n�����Ժ�");
	for (int i = 0; i < 10; i++)
	{
		printf("%d  ",a[i]);

	}

	system("pause");

}