/*
 * @Author: jjk
 * @Date: 2019-05-23 15:12:18
 * @Last Modified by: jjk
 * @Last Modified time: 2019-05-23 15:43:33
 * �����ܣ�
 *         �����⣺
 *               �ֻ�Ʒ�ƴ����һ���б��� brandlist =['��Ϊ','ƻ��','һ��','OPPO','С��']��
 *               ��ʵ�����¹��ܣ����ѡ��һ���ֻ�Ʒ����Ļ���
 */
#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{

    char name1[][10] = {"��Ϊ", "ƻ��", "һ��", "OPPO", "С��"}; // ������λ����
    char *name2[] = {"��Ϊ", "ƻ��", "һ��", "OPPO", "С��"};// ����һά����
    printf("--------��ά�ַ�������Ĵ洢��ʽ-------\n");
    for (int i = 0; i <= 4; i++)
    {
        printf("name[%d] = \"%s\"\t", i, name1[i]);
        printf("��ռ��ַ��%p\n", name1[i]);
    }

    printf("--------һάָ������Ĵ洢��ʽ--------\n");
    for (int i = 0; i <= 4; i++)
    {
        if (strcmp(argv[1],name2[i])==0)
        {
            printf("name[%d] = %s\t", i, name2[i]);
        }

        // printf("name[%d] = \"%s\"\t", i, name2[i]);
        // printf("��ռ��ַ��%p\n", name2[i]);
    }
    
    // printf("argv=%s\n", argv[1]);

    return 0;
}