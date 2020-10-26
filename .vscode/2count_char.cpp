// 题目描述
// 写出一个程序，接受一个由字母和数字组成的字符串，和一个字符，然后输出输入字符串中含有该字符的个数。不区分大小写。 
// 输入描述:
// 第一行输入一个有字母和数字以及空格组成的字符串，第二行输入一个字符。
// 输出描述:
// 输出输入字符串中含有该字符的个数。
#include "string.h"
#include <iostream>
#include "stdio.h"
using namespace std;

int main(void)
{
    string str;
    char ch;

    int Aa= 'a' - 'A';
    int cnt;

    getline(cin, str);  //a line
    cin>>ch; 
    //ch = getchar();            //a string without space

    if((str == " ") || (ch == ' '))  //不数空格
        cnt = 0;
    else
        for(int i =0; i<str.length(); i++)
        {
            if(str[i] == ch)
                cnt++;
            else if ((str[i]>='A') && (str[i]<='Z') && (str[i] == (ch - Aa)))
                cnt++;
            else if ((str[i]>='a') && (str[i]<='z') && (str[i] == (ch + Aa)))
                cnt++;
        }
    cout<<cnt;
    return 0;
}