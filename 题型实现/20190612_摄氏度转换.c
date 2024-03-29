/*
 * @Author: jjk
 * @Date: 2019-06-10 16:11:49
 * @Last Modified by: jjk
 * @Last Modified time: 2019-06-11 18:59:24
 *
 *
 *  @所有人
#6.12#
基础题
    温度的刻画有两个不同体系：摄氏度（Celsius）和华氏度（Fahrenheit）。????????????????????????????????????????????????
    请编写程序将用户输入华氏度转换为摄氏度，或将输入的摄氏度转换为华氏度。????????????????????????????????????????????????
    换算法如下：（C表示摄氏度、F表示华氏度）????????????????????????????????????????????????
     C = ( F - 32 ) / 1.8
     F = C * 1.8 + 32

要求如下：????????????????????????????????????????????????
     (1)输入输出的摄氏度可采用大小写字母C结尾，温度可以是整数或小数，如：12.34C指摄氏度12.34度；????????????????????????????????????????????????
     (2)输入输出的华氏度可采用大小写字母F结尾，温度可以是整数或小数，如：87.65F指摄氏度87.65度；????????????????????????????????????????????????
     (3)输出保留小数点后两位，输入格式错误时，输出提示：输入格式错误；????????????????????????????????????????????????
     (4) 使用input()获得测试用例输入时，不要增加提示字符串。

思路：
    1、输入字符串
    2、判断字符串最后一个字符是：c/C还是F/f
    3、获取除最后一个字符其他字符串转化为int型操作
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define LENGTH 20

void wenduZhuanhuan(char number[LENGTH])
{
   int str = strlen(number);
   char dest[LENGTH];
   strncpy(dest, number, str - 1); // 复制数值
   // printf("%s\n",dest);
   float number2 = atof(dest); // 字符串转换数值
   // printf("%.2f\n", number2);

   if (number[str - 1] == 'c' || number[str - 1] == 'C')
   {
      /* code */
      // printf("ok");
      float number3 = (number2 - 32) / 1.8;
      printf("Celsius:%.2f", number3);
      exit(0);
   }

   if (number[str - 1] == 'f' || number[str - 1] == 'F')
   {
      /* code */
      // printf("ok2");
      float number4 = number2 * 1.8 + 32;
      printf("Fahrenheit:%.2f", number4);
      exit(0);
   }


   printf("格式输入错误\n");
   
}

int main()
{

   char number[LENGTH];
   printf("输入：");
   scanf("%s",&number);
   wenduZhuanhuan(number); // 调用函数

   return 0;
}
