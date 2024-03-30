#include<iostream>  

using namespace std;  
//global varible
//全局变量
enum time 
{ 
    first,second,
    third,forth,fifth
};
//实现一个计算器，实现加减乘除，能输入想要的运算和数字，打印出相应的结果。
//让用户输入身高体重，计算出体重指数
//让用户输入一个数字，给出它上取整和下取整的结果。

int main()
{
    //local
    {

        int i;
        int j = 45;
        int g = 44;
        std::cout << "i:" << i << std::endl;
        std::cin >> i;
        std::cout << "i:" << i << std::endl;
    }

    return 0;
}