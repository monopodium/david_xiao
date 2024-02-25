#include<iostream>  
using namespace std;  

// 这里分配了6个Int大小的空间，那么之后呢，需要显式的扩展内存，通过malloc
//这种数组的定义方式是最原始的，需要我们自己注意我们的数组有多大

    //我建造了一个房子，这个房子是一个
//变量本质上是一段内存空间[面积在60-70平之间的平房][ int b[] ]

//有些位置是能够分配空间的，有些位置只是在说我的这个变量名字

    //一定要先定义这个数组b,才能把它作为参数传递进去
//把main函数定义的一个局部变量传递进去一个max_func函数里面
//int max_value: 在max_func里面不能修改
//int &max_value:引用传递，可以修改&
//return max_value
//用传进一个max_value，并修改它的方式去实现功能，把返回值类型改成void
void max_func(int b[],int &max_value);
int main()
{
    int num1=1, num2=2, num3=4, num4=7, num5=-1, num6=5, output;
    // cout<<"enter the first number"<<endl;
    // cin>>num1;
    // cout<<"enter the second number"<<endl;
    // cin>>num2;
    // cout<<"enter the third number"<<endl;
    // cin>>num3;
    // cout<<"enter the forth number"<<endl;
    // cin>>num4;
    // cout<<"enter the fifth number"<<endl;
    // cin>>num5;
    // cout<<"enter the sixth number"<<endl;
    // cin>>num6;

    // double value_array[2333333333333333333333];
    //居委会，申请2333333333333333333333
    //在后台是用int去存储的房子数量
    int value_array[] = {num1,
                         num2,
                         num3,
                         num4,
                         num5,
                         num6}; // 真正分配一块空间
    max_func(value_array, output);
    int a = 10;
    std::cout <<"a:"<< a << std::endl;
    std::cout <<"a pointer:"<< &a << std::endl;
    std::cout <<"a pointer 指向的数据:"<< *(&a) << std::endl;
    int *pointer = nullptr; // 小本子：存了人的地址
    pointer = &a; //
    std::cout <<"pointer 指向的数据:"<< *(pointer) << std::endl;

    // RAM上的地址，讲过virtual memory和physical memory
    // value_array本质上是一个地址，一个虚拟地址
    // illusory
    //
    //{1, 2, 4, 7, 1, 5}
    // std::cout << "value_array:" << *(value_array+0) << std::endl;
    // //*我要取这个地址存的数据
    // std::cout << "value_array:" << *(value_array+1) << std::endl;
    // std::cout << "value_array:" << *(value_array+2) << std::endl;
    // //我房子已经建好了，有6个房子，
    // //我就要去第7间房子看一看，但第七间房子有啥，就不一定了，可能有个酒鬼，可能有些垃圾

    // std::cout << "value_array"<<value_array[0] << std::endl;
    // std::cout << "value_array"<<value_array[1] << std::endl;
    // std::cout << "value_array"<<value_array[2] << std::endl;
    // output是客户的手机(int &)，output
    //
    // cout << output << endl;
    return 0;
}
//装修公司，装修公司说，我能去修[面积在60-70平之间的平房][ int b[] ]对应数据的类型
//参数列表表示的是能接受的数据的格式
//我去再买一个一mu一样的手机
//这里的max_value只是一个名字
//我收了一个客户的手机（int &),我给这个手机起名为max_value
//int 是复制了一个手机，买了一个新的一模一样的，起名output或者是max_value

//不同的变量类型，它的传参是不一样的，
void max_func(int b[],int &max_value){ //参数位置在喊：我可以接受一段空间，对它进行复制或者访问
    max_value = INT32_MIN;
    if(max_value<b[0]){
        max_value=b[0];
    }
    if(max_value<b[1]){
        max_value=b[1];
    }
    if(max_value<b[2]){
        max_value=b[2];
    }
    if(max_value<b[3]){
        max_value=b[3];
    }
    if(max_value<b[4]){
        max_value=b[4];
    }
    if(max_value<b[5]){
        max_value=b[5];
    } 
}

// 初始化一个数组，5个数字，计算这个数组里面所有变量的平均值
// 要用函数的形式实现，定义函数get_average 数组和average_value作为参数，
// 用引用传参的方式返回平均值

