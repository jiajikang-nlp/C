/*
 * @Author: jjk
 * @Date: 2019-05-30 13:14:46
 * @Last Modified by: jjk
 * @Last Modified time: 2019-05-30 15:06:02
 * ����⣺
   ��ʵ��һ����������һ���ַ����е�ÿ���ո��滻�ɡ�%20����
   ���磬���ַ���ΪWe Are Happy���򾭹��滻֮����ַ���ΪWe%20Are%20Happy��
 */

#include <stdio.h>
#include <string.h>

/* ��  �ܣ���str�ַ����е�oldstr�ַ����滻Ϊnewstr�ַ���
 * ��  ����str������Ŀ�� oldstr�����滻�� newstr���滻��
 * ����ֵ�������滻֮����ַ���
 */
char *strrpc(char *str, char *oldstr, char *newstr)
{
    char bstr[strlen(str)]; //ת��������
    memset(bstr, 0, sizeof(bstr));

    for (int i = 0; i < strlen(str); i++) // ����ԭ�ַ�������
    {
        if (!strncmp(str + i, oldstr, strlen(oldstr))) // oldstr:����Ҫ�滻���ַ���
        // �Ƚ������ַ�������ͬ����0����s1����s2���򷵻ش���0��ֵ����s1С��s2���򷵻�С��0��ֵ��
        {                         //����Ŀ���ַ���
            strcat(bstr, newstr); // newstr׷�ӵ�bstr����
            i += strlen(oldstr) - 1;
        }
        else
        {
            strncat(bstr, str + i, 1); //����һ�ֽڽ�������
        }
    }

    strcpy(str, bstr); // bstr���Ƶ�str��
    return str;
}

int main(void)
{

    char str[] = "We Are Happy";
    printf("origin��%s", str); // �滻ǰ

    strrpc(str, " ", "%20");   // ���ú���
    printf("\nafter:%s", str); // �滻��
    return 0;
}