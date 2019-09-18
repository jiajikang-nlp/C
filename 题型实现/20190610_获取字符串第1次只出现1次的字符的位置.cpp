#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <string>
#include <vector>

using namespace std;

int FirstNotRepeatingChar(string str)
{
  int strSize = str.size();
  //�����������
  if (strSize <= 0)
    return -1;
  //������������
  if (strSize == 1)
    return 0;

  //ʹ��vector��һ����ϣ����¼ÿ���ַ����ֵĴ�����ȫ����ʼ��Ϊ0
  vector<int> hashTable(256, 0);
  //��Χforѭ���������ַ������е�һ�α�����ͳ��ÿһ���ַ����ֵĴ���
  for (auto s : str)
  {
    hashTable[s]++;
  }

  //�������ַ������еڶ��α���:
  for (int i = 0; i != strSize; i++)
  {
    if (hashTable[str[i]] == 1)
    {
      //cout <<  str[i] << endl;
      return i;
    }
  }

  return -1;
}



// ������
int main()
{
  cout << "Please enter a string:" << endl;
  string test;
  while (cin >> test)
  {
    cout << FirstNotRepeatingChar(test) << endl;
  }

  return 0;
}