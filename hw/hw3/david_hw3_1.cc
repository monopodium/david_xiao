#include<iostream>
//有用到才去include
using namespace std;  
// 把一个
// void printLength(std::string a) {
//     cout << "Length is: "
//     << a.size()
//     << endl;
// }
//函数返回值类型 函数名字 函数参数列表，函数
//尽量少的去定义变量
//可以把共同需要执行的代码拿出来

double func_1(double x){
    double y;
    if (x < 0)
    {
        y=x/2;
    }

    if(x>0)
    {
        y=x+2;
    }

    if(x==0)
    {
        y=444;
    }

    return y;
}
int main()
{
    double x,output;
    cin>>x;
    output = func_1(x);
    cout << output << endl;
    return 0;
}