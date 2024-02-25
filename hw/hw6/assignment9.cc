//环境变量：
//系统环境变量：系统自带的变量
// PATH
//PATH里面存着很多文件夹的路径
//所有存在PATH里面路径下的可执行文件，都可以在这个系统的所有位置被使用


#include<iostream>  
#include "iostream"
using namespace std; 

#define pi 3.14

const double PI = 3.14; 
//1.看着这个文档：https://zhuanlan.zhihu.com/p/618037867
//这一次的作业，依次生成.i , .s, .o文件，
//尝试解释猜测.i 或者.s文件里的某几行是实现什么功能

//2.调研并演示#include<iostream> 是如何找到iostream在哪里的，
//在你们自己的电脑上找到，并且解释 include要去哪些文件夹下寻找文件

//3.定义一个函数，能根据d直径计算面积，使用两种形式的常量const , define,
//并解释这两种的区别
//能根据r半径计算面积，使用两种形式的常量const , define,
//并解释这两种的区别

//4.调研print char site[8]={'X', 'X', 'Y', 'S', 'D', 'S', 'B','\0'};print怎么知道它应该print到第几个char呢？

void countArea(double * d)
{
    double r = * d/2;
    double area = pi * r * r;
    cout<<"圆的面积为(const)"<<area<<endl;

    double area2 = PI * r * r;
    cout<<"圆的面积为(define)"<<area2<<endl;
}


int main()
{   
    double d = 0;
    cout<<"请输入直径d为："<<endl;
    cin>>d;
    countArea(&d);
    
}
