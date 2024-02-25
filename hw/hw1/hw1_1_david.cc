#include<iostream>  
using namespace std;  

/****/
// main函数在一个程序里只能有一个，它起的是程序入口的作用
// 告诉别人：你的程序从哪里开始执行
int main()  
{   
    int a;
    int b;
    char c;
    int d;
    cout << "这是David的计算机" << endl; 
    cout << "请输入第一个数" << endl;
    cin >> a;
    cout << "请输入第二个数" << endl;
    cin >> b;
    cout << "请输入操作（+-*/)" << endl;
    cin >> c;
    if( c== '+')
    {
        d = a + b;
    }
    else if( c== '*')
    {
        d = a * b;
    } 
    else if (c=='/')
    {
        d=a / b;
    }
    else if (c=='-')
    {
        d=a - b;
    }
    else{
        cout << "xxy是大sb" << c << endl;
    }
    cout << "结果是:" << d << endl;

    return 0;
}
