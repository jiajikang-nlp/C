
#include<stdlib.h>
#include <stdlib.h>
#include "linknode.h"
/*

 * @�����ܣ�
 *         ����һ������������ֵ��β��ͷ��˳�򷵻�һ��ArrayList��
 * @˼·��
 *      ��ν��������ã���ָ��ͷ��β��β��ͷ������ԭ���ġ�A B C D��������ɡ�����D C B A����
 *      �ȴӵ�����ģ������

*/

void main() 
{
	struct student *head = NULL;// ͷ�ڵ�ָ��
	add(&head,1,70);
	add(&head,2,80);
	add(&head,3,90);
	add(&head,4,91);
	add(&head,5,72);

	//printf("%d,%f", head->num, head->score);// ��ӡ����
	//printf("%d,%f", head->pNext->num, head->pNext->score); // ��ӡ����
	//printf("%d,%f", head->pNext->pNext->num, head->pNext->pNext->score); // ��ӡ����
	showall(head); // ��ʾ��������
 
	head = rev(head); // ��ת����
	showall(head);

	system("pause");



}