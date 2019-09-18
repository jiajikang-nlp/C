#include "linknode.h"

void add(ST **phead, int inum, float iscore) {

	if (*phead ==NULL) // �ж������Ƿ�Ϊ��
	{
		ST *newnode = (ST *)malloc(sizeof(ST));// �����ڴ�
		 
		newnode->num = inum; // �ڵ��ʼ��
		newnode->score = iscore;
		newnode->pNext = NULL;
		*phead = newnode;// ��ͷָ��ָ������ڵ�
	}
	else
	{
		// β������ķ�ʽ
		// ����Ϊ��
		ST *p = *phead;// ָ��ͷ���
		// p�洢���һ���ڵ�ĵ�ַ
		while (p->pNext!= NULL) // ѭ�������һ���ڵ�ĵ�ַ
		{
			p = p->pNext;// ����ѭ����ǰ
		}
		//p = p->PNext == null ѭ����ֹ

		ST *newnode = (ST *)malloc(sizeof(ST));// �����ڴ�
		newnode->num = inum; // �ڵ��ʼ��
		newnode->score = iscore;
		newnode->pNext = NULL;
		p->pNext = newnode;// ������
	}


}

// ��ʾ��������
void showall(ST *head) { // ����ͷ��㣬��ʾ������
	// �������еĽڵ�
	while (head!=NULL)
	{
		printf("\nnum=%d,score=%f",head->num,head->score);
		printf(" %p,%p",head,head->pNext); // ��ӡ�����ڵ�ĵ�ַ
		head = head->pNext;// ָ�벻����ǰѭ��
	}
}


ST *rev(ST *head) {


	ST *p1, *p2, *p3;
	p1 = p2 = p3 = NULL;

	if (head ==NULL || head->pNext==NULL) // ���ֻ��һ���ڵ㣬��������Ϊ��
	{
		return head;// ����ͷ�ڵ�
	}
	p1 = head;
	p2 = head->pNext;
	while (p2!=NULL) // �ӵڶ��������һ���ڵ㿪ʼѭ��
	{
		p3 = p2->pNext;// ���������ڵ�
		p2->pNext = p1;// ָ��ǰ��һ���ڵ�
		p1 = p2;// ָ����ǰ�ƶ����ӵڶ��������һ���ڵ�ȫ��ָ��ǰ��Ľڵ�
		p2 = p3;

	}
	head->pNext = NULL; // ��������Ľ��������õ�һ���ڵ�ָ��Ϊ��
	head = p1;// ָ�����һ���ڵ�

	return head;// �������ƣ��ı��head����������Ч����Ҫ����ֵ��ֵ��Ч



}