/*
 * @Author: jjk
 * @Date: 2019-06-03 21:31:04
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-10 16:05:42
 * �����ܣ�
*       �ַ����ļ��ܺͽ���:
*       ���������ǹ�����������������Ծ����鱨���мӽ��ܵ��㷨��
        ���������滻��������Ϣ�е�ÿһ��Ӣ���ַ�ѭ���滻Ϊ��ĸ�������и��ַ�����ĵ������ַ���
*       ������ĸ��Ķ�Ӧ��ϵ���£�
         ԭ�ģ�A B C D E F G H I J K L M N O P Q R S T U V W X Y Z
         ���ģ�D E F G H I J K L M N O P Q R S T U V W X Y Z A B C
         ����ԭ���ַ�P���������ַ�C��������������C=(P+3) mod 26
         �����ǿ�������ļ��ܷ��������ܷ�����֮������P=(C-3) mod 26
         �����û�����ʹ�õ����������Сд��ĸa~zA~Z���ո��������ţ�
         ���дһ�����򣬶������ַ�����������������ܣ�ֱ�������������пո��ý��м��ܴ���ʹ��input()������롣
 *
 * ˼·��
    1��while����ѭ�������������ַ����飺�������ĺ�����
    2���״��û������ַ������������ļ��ܳ����Ĳ���
    3��֮���û����������ַ�ʵ���жϣ����룺��1�������µ����ģ����룺��2���ԡ����ġ�������ܣ����룺��3�� �˳�
 *
 *
 *
 *
 *
 */
#include <stdio.h>


// A=65,Z=90,a=97,z=122
// ����
void CaesarEncrypt(char *pstrBff, int nKey) // nKry��ƫ����
{
  int count;
  for (count = 0; pstrBff[count] != '\0'; count++)
  {
    if ((pstrBff[count] >= 'A' && pstrBff[count] <= 'Z') || (pstrBff[count] >= 'a' && pstrBff[count] <= 'z'))
    {
      pstrBff[count] += nKey;
      if (pstrBff[count] > 'Z' && pstrBff[count] < 'a')
        pstrBff[count] -= 26; // -26
      else if (pstrBff[count] > 'z')
        pstrBff[count] -= 26;
    }
  }
}

// ����
void CaesarDecrypt(char *pstrBff, int nKey)
{
  int count;
  for (count = 0; pstrBff[count] != '\0'; count++)
  {
    if ((pstrBff[count] >= 'A' && pstrBff[count] <= 'Z') || (pstrBff[count] >= 'a' && pstrBff[count] <= 'z'))
    {
      pstrBff[count] -= nKey;
      if (pstrBff[count] < 'A')
        pstrBff[count] += 26;
      else if (pstrBff[count] > 'Z' && pstrBff[count] < 'a')
        pstrBff[count] += 26;
    }
  }
}



int main(void)
{

  char strBff[100]; // ԭ��
  int bExit = 0;    // ��ʶ��
  unsigned int nSel, nKey = 0;
  printf("��1�������µ����ģ����룺��2���Ըռ��ܵ����Ľ��н��ܣ����룺��3���˳�");

  while (!bExit)
  {
    printf("\n**************************\n");
    printf("������ָ�");
    scanf("%d", &nSel);
    while (getchar() != '\n')
      ;
    switch (nSel)
    {
    case 1:
      printf("������Ҫ���ܵ����ģ�");
      gets(strBff);
      printf("������ƫ������");
      scanf("%d", &nKey);  // ƫ����
      while (getchar() != '\n')
        ;
      CaesarEncrypt(strBff, nKey); // ����
      printf("���ܺ��������: %s\n", strBff);
      break;
    case 2:
      printf("��������Ҫ���ܵ����ģ�");
      gets(strBff);
      printf("������ƫ������");
      scanf("%d", &nKey); // ƫ����
      while (getchar() != '\n')
        ;
      CaesarDecrypt(strBff, nKey);  //����
      printf("���������ģ�%s\n", strBff);
      break;
    case 3:
      return 1;
    default:
      printf(".\n");
    }
  }
  return 0;
}
