/*
 * @Author: jjk 
 * @Date: 2019-05-27 11:13:06 
 * @Last Modified by: jjk
 * @Last Modified time: 2019-05-27 11:24:54
 */

/*

����⣺�����·������У�
2/1 �� 3/2 �� 5/3 �� 8/5 �� 13/8 �� 21/13...
���������е�ǰ N ��֮�ͣ�N�ɼ�������

*/

#include <stdio.h>
int main(int argc, char const *argv[])
{
    /* code */
    double mu = 1.0;
    double zi = 2.0;
    double sum = 0;
    int n;
    printf("������N:");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        sum += (double)zi / mu;
        zi = mu + zi;
        mu = zi - mu;
    }

    printf("sum=%lf", sum);

    return 0;
}
