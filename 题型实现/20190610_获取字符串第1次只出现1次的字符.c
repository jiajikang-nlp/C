/*
 * @Author: jjk
 * @Date: 2019-06-10 16:11:49
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-11 16:57:08
 *
 * ��ʵ��һ�����������ҳ��ַ����е�1��ֻ����1�ε��ַ���
      ���磬
      �����ַ�����ֻ����ǰ�����ַ�"go"ʱ����1��ֻ���ִε��ַ���"g"��
      ���Ӹ��ַ����ж���ǰ�����ַ�"google"ʱ����1��ֻ����1�ε��ַ��ǡ�l����


   1�����һ���ַ�������ȡ����ǰn���ַ�
   2�����ǰn���ַ���ʵ�ֲ��ң�ֻ����1�ε��ַ������
   ��������������һ���ǿ��ַ���
   ��������������һ��ֻ����һ�ε��ַ���������������-1
   ʾ����go g��google l

   1��û�г��̺���ʷ
   2�����۱���ϵ���
   3���ڿ��Ͻ�
   4������̬�ȣ�רһ���������棬���Ǻܸ��𣬶��Ǳ��Ž�����̬��ÿһ�θ��鶼רע�ģ����ܽ�̤��������������������ˣ���ʱ˵����
   5���ҽ̣�����������ò������⣺����Ҫ������ѽ�������ѽ�����˳���������Ҫ������ӡ��ѽ��
   5���Ը�Ƣ���ã��ܰ���(�ܰ��ݶԷ���һЩë��ѽ�ȵȣ������ã����ʣ�����
   6����ͥ��������Ҫ��
   
   ��ע�������������������
   
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 30
const int Tabsize = 256;
int hashtab[256]; // int��ȫ�ֱ���

int main()
{
   char str[LENGTH] = "0";

   while (scanf("%s", &str))
   {
      /* code */
      bool flg = false;
      for (int i = 0; i < Tabsize; i++)
      {
         /* code */
         hashtab[i] = 0;
      }
      for (int i = 0; i < strlen(str); i++)
      {
         /* code */
         hashtab[str[i]]++;
      }

      for (int i = 0; !flg && i < strlen(str); ++i)
      {
         /* code */
         if (hashtab[str[i]] == 1)
         {
            /* code */
            printf("%c\n", str[i]);
            flg = true;
            break;
         }
      }

      if (!flg)
      {
         /* code */
         printf("-1");
      }
   }

   return 0;
}
