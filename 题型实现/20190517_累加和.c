 
#include <stdio.h>

int main(int argc, char *argv[])
{

  int i, n;
  long long a = 1, sum = 0; // a:ʵ�ֽ׳�,sum :�׳˺�

  printf("������׳�����");
  scanf("%d", &n);
  for (int i = 1; i <= n; i++)
  {
    a *= i;
    sum += a;
    printf("\n%d!=%lld", i, a);
  }
  printf("\nsum = %lld", sum);

  return 0;
}
