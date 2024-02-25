#include <iostream> 
#include "head.h"
// #include <cmath>
//cmath: c++里面实现了一些数学操作的库
//通过include <cmath>就可以调用库里面的数学操作
//根号，开方，平方，立方，求绝对值
//lib:
//规定 
using namespace std;

//声明：declaration
//定义：definition
//命名空间 stand

//声明：不会分配空间
extern int x;
//declaration：定义
//redeclaration:重定义，定义了多次
// 一个工程里面，有很多个文件，每个文件实现了一小部分功能，那就有可能会用到extern
// 文件A: extern int x; 我们也可以使用这个x :赋值，读取，输出x
// 文件B: extern int x; 但是只能被定义一次： int x;
// 文件C: 没有声明的语句：c里面就不能用A里面定义的x，
// 一个变量只能定义一次
int main()
{
    int x = 25;
    int y = -125;
    y = x;
    // 不能抄袭，不能问chatgpt之类的
    // 尽量尝试自己运行一下
    //需要自己查一下资料

    // cout << "求开方(根号25):" << std::sqrt(x) << endl; // 3.14161
    // cout << "求立方(25^3)" << std::pow(25,3) << '\n'; // 10.6
    // cout << "求绝对值 " << std::abs(y) << '\n'; // 10
    // double a;
    // double b;
    // double c;
    // std::cout << "这是David的计算机" << std::endl;
    // std::cout << "请输入身高(m)" << std::endl;
    // std::cin >> a;
    // std::cout << "请输入体重(kg)" << std::endl;
    // std::cin >> b;
    // c = b/a/a;

    // std::cout << "结果是:" << c << std::endl;
    return 0;
}

// local path:局部路径 ： 几栋几单元：./hw1_2_david.cc hw1_2_david.cc
// hw/hw1/hw1_1_david.cc
//dir/a.cc

//relative:相对路径/局部路径
// global path:全局路径 ：中国，山东，济南，xx小区，几栋几单元
// 全局路径：/home/msms/learn_cpp/hw/hw1/hw1_1_david.cc