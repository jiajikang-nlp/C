/*
 * @Author: jjk
 * @Date: 2019-05-24 09:14:30
 * @Last Modified by: jjk
 * @Last Modified time: 2019-05-24 09:55:54
 * coding��gbk
 * �����ܣ�������1�����һ������ת�����������ԡ�g��Ϊ��λ�����ֺ󷵻ػ���ɡ�kg���Ľ��
 *          1000k = 1kg
 *
 */

#include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
#define DFWW 0.001
#define DFWW2 1000

void trans(float sec)
{
    float g, kg;
    if (sec >= DFWW2)
    {
        kg = sec / DFWW2; //����ʱ 3600����  ����ǧ�ˣ�1000����
        printf("��\"kg\"Ϊ��λ:%.3f", kg);
    }
    else
    {
        kg = sec * DFWW;
        printf("��\"kg\"Ϊ��λ:%.3f", kg);
    }
}

int main()
{
    float sec;
    printf("��������\"g\"Ϊ��λ��ֵ��\n");
    scanf("%f", &sec);
    trans(sec);
    return 0;
}