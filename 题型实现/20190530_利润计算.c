/*
 * @Author: jjk 
 * @Date: 2019-05-29 19:32:05 
 * @Last Modified by:   jjk 
 * @Last Modified time: 2019-05-29 19:32:05 
 * �����⣺
        ���һ���������㺯��invest������
        ����������������amount���ʽ𣩣�rate�������ʣ���time��Ͷ��ʱ�䣩��
        ��������ÿ��������������������ÿһ����ʽ��ܶ�
        ���磬amount = 10000 , rate = 8% ,time = 5
 */

#include <stdio.h>
double invest(double amount, double rate, int time)
{
    double sum_zijin = 0.0;
    sum_zijin = amount + amount * rate * time;
    printf("%.2lf", sum_zijin);
    return 0;
}

int main(int argc, char const *argv[])
{
    /* code */
    double amount;
    double rate;
    int time;
    printf("�������ܽ����ʡ�ʱ�䣺");
    scanf("%lf%lf%d", &amount, &rate, &time);
    invest(amount, rate, time);
    return 0;
}
