// 题目描述
// 计算字符串最后一个单词的长度，单词以空格隔开。
// 输入描述:
// 一行字符串，非空，长度小于5000。

// 输出描述:
// 整数N，最后一个单词的长度。

#include "stdio.h"
#include <iostream>
#include "string.h"

using namespace std;


int main(void)
{
    string str;
    int len;
    int cnt;
    getline(cin, str);
    len = str.length();
    for(int i=len-1; i>=0; i--)
    {
        if(str[i] == ' ')
            break;
        else
        {
            cnt++;
        }
        
    }
    cout<<cnt;
    return 0;
}
