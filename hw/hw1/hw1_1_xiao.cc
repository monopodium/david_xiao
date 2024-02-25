#include<iostream> 
using namespace std;  

int main()
{
    int a,b,c;
    char d;
    cout<<"请输入"<<endl;

    // int d;
    cin >> a >> d >> b;
    std::cout << "a输入的是什么:" << a << std::endl;
    std::cout << "d输入的是什么:" << d << std::endl;
    std::cout << "b输入的是什么:" << b<< std::endl;

    if(d == '+')
    {
        cout<<a+b<<endl;
    }
    else if(d == '-')
    {
        cout<<a-b<<endl;
    }
    else if(d == '*')
    {
        cout<<a*b<<endl;
    }
    else if(d == '/')
    {
        cout<<a/b<<endl;
    }
    else
    {
        cout<<"你怎么输入这个，我人傻了"<<endl;
    }
  
    return 0;
}
