/*
 * @Author: jjk
 * @Date: 2019-06-11 16:37:56
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-11 18:29:33
 *
 * 2��������
     2��������
      ���û����������û���������Ļ��ᣬҪ�����£�????????????????????????????????????????????????
      1���������һ�������û���Ϊ��Kate��,�ڶ�����������Ϊ��666666�����������¼�ɹ��������˳�����????????????????????????????????????????????????

      2����һ����3�������û��������벻��ȷ�����3���û�����������������˳����򡣡���
 */

#include <stdio.h>
//#include <stdlib.h>
#include <string.h>
#define LENGTH 20

int main()
{
  int n = 0;
  char name[LENGTH];
  char password[LENGTH];
  while (1) // ��ѭ��
  {
    printf("�������û�����");
    scanf("%s", &name);
    printf("���������룺");
    scanf("%s", &password);

    if (strcmp(name, "Kate") == 0)
    {
      /* code */
      if (strcmp(password, "666666") == 0)
      {
        /* code */
        printf("��¼�ɹ�");
        break;
      }
    }

    n++;
    if (n == 3)
    {
      /* code */
      return 0;
    }
    printf("������û�����������������\n");

    /* code */
  }

  return 0;
}