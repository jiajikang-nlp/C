#include <stdio.h>
#include <stdlib.h>

// ����������
// �ֶ�����x��y������һ����̬����p[x][y]
// ��0��ʼ��ʼ����һֱ��ʼ����p[x-1][y-1]���Ԫ�أ�һֱ����

void main() {

	int x, y;
	scanf_s("%d%d", &x, &y);// ��ʼ��x��y��������

	// ����ָ����Դ洢ָ������ĵ�ַ
	// ��̬����һƬ�ڴ棬���ָ�����飬ÿһ��Ԫ�ض���һ����ַ
	// Ȼ��ָ��������׵�ַ���ݸ�pp����
	int **pp = malloc(sizeof(int*)*x); // ָ��ָ���ָ��
	for (int i = 0; i < x; i++)
	{

		// �����ڴ棬�ж����У�һά����
		// ÿ��ָ�붼�洢����һƬ�ڴ�ĵ�ַ
		pp[i] = malloc(sizeof(int)*y);
 
	}


	//  ��ֵ
	int num = 0;
	for (int i = 0; i < x; i++)
	{
		for (int j = 0; j < y; j++)
		{
			pp[i][j] = num;// *(*(pp+i) +j) �ȼ�
			// *(*(pp + i) + j) = num;
			num++;
			printf("%4d",pp[i][j]); // ��ӡ
		}

		printf("\n");// ����
	}

	// �ͷ��ڴ�
	for (int i = 0; i < x; i++)
	{
		free(pp[i]);
	}

	free(pp);

	system("pause");


}


// �ֶ�����x��y������һ����̬����p[x][y]
// ��0��ʼ��ʼ����һֱ��ʼ����p[x-1][y-1]���Ԫ�أ�һֱ����

// ������̬����
void main7() {
	int x, y;
	scanf_s("%d%d",&x,&y);// ��ʼ��x��y��8*9��ά����
	void *p = malloc(sizeof(int)*x*y); // �����ڴ棬�������ڴ� �������ǳ���ָ����
	// y������һ����֪�ĳ��������ܽ���Ƭ�ڴ浱��һ����ά������ʹ��

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




//������̬��ά����
void main6(){

	int a[3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12 };
	int(*p)[4] = a; // ����һ��ָ�룬�洢��ά������׵�ַ
	// һ��ָ�����ĸ�Ԫ�ص�һά�����ָ��
	//��ӡ��ά��������
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%5d", a  [i][j]);

		}
		printf("\n");
	}
	// ��ӡ���ݻ��е�ַ
	for (int *p = &a[0][0]; *p < &a[0][0]; p++)
	{
		printf("\n%d,%p",*p,p);

	}
	// 

	system("pause");

	


}