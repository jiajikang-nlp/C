"""
 author:jjk
 datetime:2019/3/29
 coding:utf-8
 project name:Pycharm_workstation
 coding:utf-8
 Program function:
   20190619
    用户随机输入 N 个大写字母，使用 dict 统计用户输入的每个字母的次数 。比如，输入：FUWAHUHSDFJYULFSDHJ
    输出：{'F': 3, 'U': 3, 'W': 1, 'A': 1, 'H': 3, 'S': 2, 'D': 2, 'J': 2, 'Y': 1, 'L': 1}
"""

# -*- coding:utf-8 -*-

str = input("请输入大写字母字符串：")
# str = "jiaja"
str_list = list(str) # 列表形式
print(str_list)

char_dict = {} # 创建一个空字典

for char1 in str_list: # 遍历字符串
    if char1 in char_dict: # 判断字典char_dict中是否含有相同的字符：char1 ，如果存在：
        count = char_dict[char1] # 取出之前所在字符(键)所对应的值，赋值给当前count
        # print('ceshi=',count)
    else:
        count =0 # 重置

    count = count+1 # 统计字符出现个数
    char_dict[char1] = count #  给键赋：值---》j：count->1
    print('ceshi2=',char_dict[char1])

print(char_dict)# 打印输出最终的结果


