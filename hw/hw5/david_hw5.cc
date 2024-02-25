#include<iostream>  
using namespace std; 


#include <stdio.h>
//一个工程里面最多有几个main函数？
//要保证复制过来之后也要正确运行
//头文件也只包含一次

//作业1，定义一个长为6的数组，作为参数传递给一个函数，在函数内修改数组的每个值为6.6，
//最后打印数组的元素

//买了一台电脑
//把数组里所有的元素都给变成6.6
//double b[]参数，他规定你一定要传递一个double类型的数组
//类比p图软件，只能传固定的格式
double func(double b[])
{  
   b[0]= b[1]=b[2]=b[3]=b[4]=b[5]=6.6;
   return 0;
}
void swap(double &a, double &b); //函数声明,
void func(char site[]);
//如果不去调用他，就不会自动执行
int main()
{
    //debug
    double num1 = 3.3, num2 = 7.8, num3 = 6, num4 = 7.5, num5 = 8.9, num6 = 9;
    // // cout<<"enter the first number:"<<endl;
    // // cin>>num1;
    // // cout<<"enter the second number:"<<endl;
    // // cin>>num2; 
    // // cout<<"enter the third number:"<<endl;
    // // cin>>num3;
    // // cout<<"enter the forth number:"<<endl;
    // // cin>>num4;
    // // cout<<"enter the fifth number:"<<endl;
    // // cin>>num5;
    // // cout<<"enter the sixth number:"<<endl;
    // // cin>>num6;
    double array[] = {num1, num2, num3, num4, num5, num6};
    // // double output = func(array); //去调用这个函数，去使用这个电脑
    // func(array);
    // //output
    // //有需要才用，
    // //三种不同的参数传递的类型：1，普通的参数类型，int,float,double func(int a)  2，&认为他传递的是一个指针   
    // //3，func(int*),
    // cout<<"num1:"<<array[0]<<endl;
    // cout<<"num2:"<<array[1]<<endl;
    // cout<<"num3:"<<array[2]<<endl;
    // cout<<"num4:"<<array[3]<<endl;
    // cout<<"num5:"<<array[4]<<endl;
    // cout<<"num6:"<<array[5]<<endl;


    double a,b;
    //cout<<"enter the number a:";
    a=2;
    //cout<<"enter the number b:";
    b=4;
    swap(a,b);  //函数调用 call
    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;
    char site[8]={'X', 'X', 'Y', 'S', 'D', 'S', 'B', '\0'};
    
    printf("site[0]的值是：%c\n", site[3]);
     //char
    //需要指定打印的类型

    std::cout << site << std::endl;
    func(site);
    std::cout << site << std::endl; //site是充满了char的数组，直接打印，打印的竟然是整个数组，
    printf("p site:%p\n", site); //c里面用来控制输出的用法
    std::cout << "&site: "<<&site << std::endl;
    std::cout << array << std::endl; //array是充满了整数的数组，直接打印，打印的是一个地址0x7ffcb82b84d0
    return 0;
}
//现在用的参数传递方式能修改到main函数里传入的参数吗？
//函数头 指定了返回值的形式，指定了函数的名字，指定了参数的类型
//
void swap(double &a, double &b) //函数定义，真正实现了这个函数
{
    double c =b;
    b=a/2;
    a= c;
}



//尝试定义一个字符串类型的数组，并打印，定义一个函数，将字符串类型的数组传递进去，修改数组的第一个字符为“A",并再次打印
void func(char site[])
{  
   site[1]='A';
   printf("肖旭洋是大傻波的缩写：%s\n", site);
}
