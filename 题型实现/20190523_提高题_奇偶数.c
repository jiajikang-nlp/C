/*
 * @Author: jjk
 * @Date: 2019-05-23 15:46:08
 * @Last Modified by: jjk
 * @Last Modified time: 2019-05-23 16:42:19
 * �����ܣ�
 *         ����⣺
 *               ��дһ������������nΪż��ʱ�����ú����� 1/2+1/4+...+1/n ,
 *               ������nΪ����ʱ�����ú��� 1/1+1/3+...+1/n
 */
#include <stdio.h>
#include <stdlib.h>

double myfunc(int n) {

  double s;
  for (s = 0; n > 0; s += 1.0 / n, n -= 2)
    ;
  // printf("s=%lf\n",s);
  return s;
}

// ʵ�ַ�ʽһ
int main1(int argc, char *argv[]) {
  printf("ʵ�ַ�ʽһ\n");
  int x = 0;
  int flag = 0;
  double sum = 0.0;
  int input = atoi(argv[1]); // ���ַ���ת��Ϊ����ֵ��
  // printf("input=%d\n", input);

  if (input % 2 == 0) // ż��
  {

    printf("\ninput=%dΪż��", input);
    for (int i = input; i > 0; i -= 2) {
      sum = sum + 1.0 / i;
    }
  } else {

    printf("\ninput=%dΪ����", input);
    for (int i = input; i > 0; i -= 2) {
      sum = sum + 1.0 / i;
    }
  }

  printf("\nsum = %lf\n", sum);

  return 0;
}

// ʵ�ַ�ʽ��

int main(int argv, char *argc[]) {
  printf("ʵ�ַ�ʽ��\n");
  int n, i;
  while (1) {
    scanf("%d", &n);
    if (n > 1)
      break;
    printf("Input error, redo:");
  }

  printf("1/%d", 2 - (n & 1));

  for (i = 4 - (n & 1); i <= n && i <= 6; printf("+1/%d", i), i += 2)
    ;
  if (n & 1 && n > 5 || (n & 1) == 0 && n > 6)
    printf("+...+1/%d", n);
  printf(" = %f\n", myfunc(n));
  return 0;
}