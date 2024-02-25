#include<iostream>  
using namespace std;  

// 这里分配了6个Int大小的空间，那么之后呢，需要显式的扩展内存，通过malloc
//这种数组的定义方式是最原始的，需要我们自己注意我们的数组有多大
//输入的变量是一个int类型的数组
//返回的变量是一个int类型的数
// max_func
// min_func
// //把main函数定义的一个局部变量传递进去一个max_func函数里面
//int max_value: 在max_func里面不能修改
//int &max_value:引用传递，可以修改&
//return max_value
//用传进一个max_value，并修改它的方式去实现功能，把返回值类型改成void
//
int min_func(int b[]){
    int min_value = INT32_MAX;

     if(min_value>b[0]){
        min_value=b[0];
    }
    if(min_value>b[1]){
        min_value=b[1];
    }
    if(min_value>b[2]){
        min_value=b[2];
    }
    if(min_value>b[3]){
        min_value=b[3];
    }
    if(min_value>b[4]){
        min_value=b[4];
    }
    if(min_value>b[5]){
        min_value=b[5];
    }

    return min_value;
}

int main()
{
    int num1, num2, num3 ,num4 ,num5 ,num6;
    cout<<"enter the first number"<<endl;
    cin>>num1;
    cout<<"enter the second number"<<endl;
    cin>>num2;
    cout<<"enter the third number"<<endl;
    cin>>num3;
    cout<<"enter the forth number"<<endl;
    cin>>num4;
    cout<<"enter the fifth number"<<endl;
    cin>>num5;
    cout<<"enter the sixth number"<<endl;
    cin>>num6;
    int array[] = {num1,
               num2,
               num3,
               num4,
               num5,
               num6};

    int output = min_func(array);
    cout<<"min_number:"<<output<<endl;
    return 0;

}
//把main函数定义的一个局部变量传递进去一个max_func函数里面
//int max_value: 在max_func里面不能修改
//int &max_value:引用传递，可以修改&
//return max_value
//用传进一个max_value，并修改它的方式去实现功能，把返回值类型改成void

// #include <iostream>
// using namespace std;

// void swap_by_value(int x, int y) {
//     int tmp = x;
//     x = y;
//     y = tmp;
//     cout << "&x: " << &x << ", &y: " << &y << endl;
// }

// int main()
// {
//     int a = 3;
//     int b = 7;

//     cout << "before: a: " << a << ", b: " << b << endl;
//     cout << "&a: " << &a << ", &b: " << &b << endl;
//     swap_by_value(a, b);
//     cout << "after : a: " << a << ", b: " << b << endl;

//     return 0;
// }