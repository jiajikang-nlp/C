/*
 * @Author: jjk
 * @Date: 2019-06-11 17:12:31
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-11 17:56:17
 * 
 * 20190611
 * 1:��������ʵ����
     ��������һ����������ӡ����������ʮ���ơ��˽��ơ�ʮ�����ƣ���д������������ʽ���ַ�����
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ������
void decToBin(int num)
{
  if (num > 0)
  {
    decToBin(num / 2);
    printf("%d", num % 2);
  }
}


int main(int argc, char const *argv[])
{
  /* code */
  int number;
  printf("��������һ����������ӡ����������ʮ���ơ��˽��ơ�ʮ�����ƣ���д������������ʽ���ַ�����");
  printf("\n�����룺");
  scanf("%d", &number);
  printf("ʮ���ƣ�%d\n", number);
  printf("�˽��ƣ�%o\n", number);
  printf("ʮ�����ƣ�%X\n", number);
  printf("�����ƣ�");
  decToBin(number);

      return 0;
}
