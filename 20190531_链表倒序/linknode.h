
#include <stdio.h>
#include <stdlib.h>

struct student
{
	int num;// ���
	float score; // ����ɼ�
	struct  student *pNext; // �洢��һ���ڵ�ĵ�ַ
};

typedef struct student ST;// ��д�ṹ������

void add(ST **phead,int inum,float iscore);// ��������������ͷ���ĵ�ַ��Ȼ���������

void showall(ST *head);// ����ͷ��㣬��ʾ��������

ST *rev(ST *head);// ʵ����ת
