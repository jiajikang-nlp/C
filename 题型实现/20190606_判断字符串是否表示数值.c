/*
 * @Author: jjk
 * @Date: 2019-06-07 23:26:07
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-07 23:47:07
 * �����ܣ���ʵ��һ�����������ж��ַ����Ƿ��ʾ��ֵ(����������С��)��
 * ���磬�ַ���"+100","5e2",-123","3.141 6"��"-1E-16"����ʾ��ֵ������
 * "12e","1a3.14","1 .2.3","+-5"��"12e+4.3"�����ǡ�
 */

/*

˼·������
    1��e/E�����������֣���ֻ����һ��e/E
    2����һ�γ��ֵķ���(+/-)Ҫô��ͷ��Ҫô������e/E
    3���ڶ��γ��ֵķ���(+/-)ֻ�ܽ�����e/E����
    4��С����ֻ�ܳ���һ�Σ���ֻ�ܳ�����e/Eǰ��
    5�����ܳ��ֳ���0-9��+/-,e/E������ַ�
    ǰ��������
        1 ���С����ǰ��û�������Զ����㡣����-.799�൱��-0.799;
        2 ������ź���û�������Զ����㡣����+e+�൱��+0e+0;
����Ŀ������֪��
    һ����ֵ�ַ��������ǳ�����ַ�����Ҳ�����ǿ�ѧ��������ʾ����ֵ���ַ�����
    �Ϳ�ѧ��������ʾ���Է��֣����ַ���E������e��������ʾ���볣����ֵ���ַ���һ�������ַ���E������e�����Ҳ࣬��������
    ������Խ���ֵ���ַ������տ�ѧ��������ʾ�ķֳ�����ֱ��鼴�ɡ�
ִ�з�ʽ��a.exe
*/

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LENGTH 20

// �ж��ַ����Ƿ����ĳ���ַ�
bool contains(char str[LENGTH], char ch)
{
  for (int i = 0; i < LENGTH; i++)
  {
    /* code */
    if (str[i] == ch)
    {
      /* code */
      return true;
    }
  }
  return false;
}

// �ַ��������ַ�ch��ͷ
bool startWith(char str[], char ch)
{
  if (str[0] == ch)
  {
    /* code */
    return true;
  }

  return false;
}

// �ж��Ƿ��Ǵ�����
bool isDigit(char num[])
{
  for (int i = 0; i < strlen(num); i++)
  {
    /* code */
    if (num[i] < '0' || num[i] > '9')
    {
      /* code */
      //printf("\n����false");
      return false;
    }
  }

  return true;
}

// �ж��Ƿ��ǺϷ�����ֵ(�ǿ�ѧ��������ʾ)
bool isDecimal(char str[])
{

  if (startWith(str, '-') || startWith(str, '+')) // �ж��Ƿ�ͷ�ǣ�-/+
  {
    /* code */
    str = strncpy(str, str + 1, strlen(str)); // ���Ƴ��������ַ���
    str[strlen(str)] = '\0';                  // ������ʶ��
  }

  printf("\n��ӡ������ݣ�\n"); // ���������ַ���
  for (int i = 0; i < strlen(str); i++)
  {
    /* code */
    printf("%c\n", str[i]);
  }

  // printf("\n��ȡС�����λ��\n");
  if (contains(str, '.')) // �����С����
  {
    /* code */
    int posE = -1;
    for (int i = 0; i < strlen(str); i++)
    {
      /* code */
      if (str[i] == '.')
      {
        /* code */
        posE = i;
        break;
      }
    }

    if (posE == 0 || posE == strlen(str) - 1)
    {
      /* code */
      return true;
    }
    // С������ߺ��ұ�
    char left[posE];
    char right[strlen(str) - posE - 1];
    strncpy(left, str, posE); //  ���Ƴ�.���ַ���:�������
    left[posE] = '\0';
    strncpy(right, str + posE + 1, strlen(str)); // ���Ƴ��������ַ����������ұ�
    right[strlen(str) - posE - 1] = '\0';        // ������ʶ��

    for (int i = 0; i < posE; i++)
    {
      /* code */
      printf("\n%c", left[i]);
    }

    printf("\n***********3333*********");
    
    for (int j = 0; j < strlen(str) - posE - 1; j++)
    {
      /* code */
      printf("\n%c", right[j]);
    }
    printf("\n�Ƿ�����ֵ(1/0):");
    return isDigit(left) && isDigit(right); // ������ߺ��ұߵ���ֵ���
  }
  else
  {
    // �������С��
    /* code */
    // printf("%d",isDigit(str));
    printf("�Ƿ�����ֵ(1/0):");
    return isDigit(str);
  }
}

int main(int argc, char const *argv[])
{
  /* code */
  // +100��,��5e2��,��-123��,��3.1416���͡�-1E-16������ʾ��ֵ��
  // ���ǡ�12e��,��1a3.14��,��1.2.3��,��+-5���͡�12e+4.3�������ǡ�
  char str[] = "12.3E-124";
  printf("ԭ�ַ�����");
  for (int i = 0; i < strlen(str); i++)
  {
    /* code */
    printf("%c",str[i]);
  }
  
  int posE = -1; // λ�ñ�ʶ��
  // ��һ�����ж��Ƿ���ʹ�ÿ�ѧ��������ʾ�����������Ϊ�������ж�
  if (contains(str, 'E') || contains(str, 'e')) //
  {

    /* code */
    printf("\n�����ַ�e/E"); // �һ�ȡ�ַ�e/E��λ��
    for (int i = 0; i < strlen(str); i++)
    {
      /* code */
      if (str[i] == 'E' || str[i] == 'e')
      {
        /* code */
        posE = i;
        printf("\ni=%d", i);
        break; // �����˴�ѭ��
      }
    }

    // �ж�'E'||'e'�ڿ�ʼ���ǽ�β��λ��
    if (posE == 0 || posE == strlen(str) - 1)
    {
      /* code */

      return false;
    }

    // e/E��ߺ��ұߵļ���
    char left[posE];
    char right[strlen(str) - posE - 1];
    printf("\nλ��");
    // ���ַ�e/EΪ�ָ��ߣ�������ߺ��ұߵ��ַ���
    strncpy(left, str, posE);                    // ���Ƴ��������ַ���:�������
    left[posE] = '\0';                           // ������ʶ��
    strncpy(right, str + posE + 1, strlen(str)); // ���Ƴ��������ַ����������ұ�
    right[strlen(str) - posE - 1] = '\0';        // ������ʶ��

    // ���left�жϺͷǿ�ѧ������һ��
    // �ұ�right�жϱ���Ϊ����
    printf("\n*********left***********");
    for (int i = 0; i < posE; i++)
    {
      /* code */
      printf("\n%c", left[i]);
    }
    printf("\n*********right***********");
    for (int j = 0; j < strlen(str) - posE - 1; j++)
    {
      /* code */
      printf("\n%c", right[j]);
    }

    // �ж�e/E�Ҳ���ַ�����ͷ�����Ƿ�Ϊ-/+�Ҹ��Ƴ�����������ַ�
    if (startWith(right, '-') || startWith(right, '+'))
    {
      /* code */
      strncpy(right, right + 1, strlen(right)); // ���Ƴ��������ַ����������ұ�
      right[strlen(str) - posE - 1] = '\0';     // ������ʶ��
    }

    printf("\n*********right��ȥ����***********");
    for (int j = 0; j < strlen(str) - posE - 1; j++)
    {
      /* code */
      printf("\n%c", right[j]);
    }
    printf("\n*********�ж��Ƿ����***********");

    printf("%d", isDecimal(left) && isDigit(right)); // �Ҳ�ֻ��������
    //return isDecimal(left) && isDigit(right); // ���ﴦ������࣬�Ҳࣺe/E��-/+���������
  }
  else
  {
    /* code */
    printf("�������ַ�e/E");
    // printf("\n%d",isDigit(str));
    printf("\n%d", isDecimal(str));
    //return isDigit(str);
  }

  return 0;
}