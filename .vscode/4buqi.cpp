// 题目描述
// •连续输入字符串，请按长度为8拆分每个字符串后输出到新的字符串数组； 
// •长度不是8整数倍的字符串请在后面补数字0，空字符串不处理。 

// 输入描述:
// 连续输入字符串(输入2次,每个字符串长度小于100)

// 输出描述:
// 输出到长度为8的新字符串数组

#include <iostream>
#include "string"
using namespace std;

int main(void)
{
    string  input = "";
    while (cin>>input)
    {
        int index = 0;

        if(input == "")
            continue;
        else 
        {
            if(input.length() <= 8)  // 空
            {
                cout<<input<<endl;
            }
            else
            {
                string output = "";
                while(index < input.length())    //找到末尾
                {
                    if((index % 8 == 0) && (index>0))  //数满8个字符
                    {
                        cout << output <<endl;
                        output =  input[index];
                    }
                    else
                    {
                        output += input[index];
                    }
                    index ++;
                }
                if(output !="")
                {
                    for(int i= output.length(); i<8; i++)    // 末尾不够8个，补0
                        output += "0";
                    
                    cout << output <<endl;
                }
                    
            } 
        }
        
            
    }

    return 0;
}
