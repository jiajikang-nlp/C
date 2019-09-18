/*
 * @Author: jjk
 * @Date: 2019-05-24 10:09:14
 * @Last Modified by: jjk
 * @Last Modified time: 2019-05-24 10:59:54
 * �����ܣ�
 *        ����⣺��ӡ����������Σ�ʵ�ָ��ݼ����������ִ�ӡ����Ӧ�������У����磬����10�����ӡ��10�У�
 */

/*

˼·��
    ����һ����ά���飬����Ԫ���ȳ�ʼ��Ϊ0��
    ������ĵ�1�кͶԽ���Ԫ�ظ�ֵΪ 1�� ����Ԫ��a[i][j] = a[i - 1][j - 1] + a[i - 1][j] ��
    ��������ά����������ǡ�

*/

#include <stdio.h>
#include <stdlib.h>
#define N 14

int main(int argc, char *argv[])
{
    int n = 0;
    
    while (n<=0||n>=13)
    {
        printf("������������");
        scanf("%d",&n);
    }
    
    int a[N][N] = {0}; // ��ʼ����ά����a�����е�Ԫ��Ϊ0
    // ��ʼ����ά����
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++) // j<=i,��i�У�ֻ��i+1��
        {
            if (j == 0 || i == j) // ����ǵ�һ�У�ȫΪ1
            {
                a[i][j] = 1;
            }
            else
            {
                a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
            }
        }
        printf("\n");
    }

    for (int i = 0; i < n; i++)
    {
        printf("%*d", 30 - i * 2, a[i][0]); // ��һ��
        for (int j = 0; j < i; j++)
        {
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
