#include<iostream>  
using namespace std;
#include <cmath>
// //    return exp(x) + pow(y,1/3)+log10(10 * pow(x, 2) + ceil(y + x));
// int x = 9;
// float y;
// // 参数作用域
// // 写一个新的函数，修改全局变量x为100，并返回e^(x + y)的结果
// // global variable :全局变量
// // local variable ：局部变量
// double x_y_result = 400;
// void myFunction(double &temp,int x);
// //普通参数传递：double temp
// //引用传递: double &temp
// int count = 0;
// //如果我们去定义全局变量，那么谁都能来修改一下它,就很难保证正确性
// //尽量少用全局变量，
// //该用什么类型，就用什么类型
// //int 1.77 
// //int 0.00000000000000000000000000000000000001
// //定义了一个变量，立即进行初始化
// //vector :是c++里独有的数组，意味着c语言里面没有
// //cpp: c plus plus
int main()
{
    //让用户输入4个数字，用数组存储下来，求用户输入的平均并输出
   //  float b1[] = {1.1, 2.1, 3.1, 4.1};
   //  char b2[5] = {'x','x','y','s','b'};
   //  std::cout<<b1[0]<<" "<<b1[1] << std::endl;
   //  // std::cout << b2[4] << " " << b2[4] << std::endl;
   //  for (int i = 0; i < 5;i++){
   //      std::cout << b2[i] << " ";
   //  }
   //  std::cout << std::endl;
   int number1 , number2 ,number3 ,number4  ;
   cout<<"请输入第一个"<<endl;
   cin>>number1;
   cout<<"请输入第二个"<<endl;
   cin>>number2;
   cout<<"请输入第第三个"<<endl;
   cin>>number3;
   cout<<"请输入第四个"<<endl;
   cin>>number4;


   int b1[] = {number1, number2, number3, number4, };
    float  result1 = b1[0]+b1[1]+b1[2]+b1[3];
    float result2 = result1/4;
    cout<<"四个数的平均值是："<<result2<<endl;
    return 0;
}


// void myFunction(double &temp,int x)
// {
//     temp = 9.6;
//     x = 20;
//     return;
