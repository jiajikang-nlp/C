/*
 * @Author: jjk
 * @Date: 2019-06-11 16:37:56
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-11 16:46:16
 *  ��ʵ��һ�����������ҳ��ַ����е�1��ֻ����1�ε��ַ���
      ���磬
      �����ַ�����ֻ����ǰ�����ַ�"go"ʱ����1��ֻ���ִε��ַ���"g"��
      ���Ӹ��ַ����ж���ǰ�����ַ�"google"ʱ����1��ֻ����1�ε��ַ��ǡ�l����


   1�����һ���ַ�������ȡ����ǰn���ַ�
   2�����ǰn���ַ���ʵ�ֲ��ң�ֻ����1�ε��ַ������
   ��������������һ���ǿ��ַ���
   ��������������һ��ֻ����һ�ε��ַ���������������-1
   ʾ����go g��google l


   ������ֻ����һ���ַ�����Ȼ��������¼ÿ���ַ����ֵĴ�����
   �����ַ���������һ����ù�ϣ��Ȼ��Թ�ϣ����в�ѯ���ɡ����ֻ����ַ���ΪСд��ĸ��ʽ����򵥵Ĳ���int hashtable[26] = {0};�����洢��
 
 */

#include <iostream>
#include <string>

using namespace std;
const int Tabsize = 256;
int hashtab[Tabsize]; // int��ȫ�ֱ���

int main()
{
  string str;
  while (cin >> str) // �����ַ���
  {
    bool flg = false;
    for (int i = 0; i < Tabsize; ++i) 
    {
      hashtab[i] = 0; 
    }
    //��Χforѭ���������ַ������е�һ�α�����ͳ��ÿһ���ַ����ֵĴ���
    for (int i = 0; i < str.size(); ++i)
    {
      hashtab[str[i]]++;
    }
    //�������ַ������еڶ��α���: �������Ҫ����ַ�
    for (int i = 0; !flg && i < str.size(); ++i)
    {
      if (hashtab[str[i]] == 1)
      {
        cout << str[i] << endl;
        flg = true;
        break;
      }
    }
    
    if (!flg)
      cout << "-1" << endl;
  }
  return 0;
}