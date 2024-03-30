#include<iostream>
// #include<stdio.h>
// #include<stdlib.h>
using namespace std;
//空间有两个大的类别：栈和堆
//栈上的空间是操作系统来分配和回收的
//堆上的空间是我们程序员可以去操作的
//warning:警告
//fatal error: 致命错误
//3GB 
int *array_b = (int *)malloc(4);
//这块空间多大：4
//这块空间用来干什么 (int *)

//malloc分配的空间，堆上分配的
int * test_1(){
    int *array_b = (int *)malloc(4);
    array_b[0] = 99;
    return array_b;
}
//改成一个函数，这个函数返回的类型是int *，然后返回的是指向a_test的指针。
//系统分配的空间，栈上分配空间
int * test_2(){
    int a_test;
    a_test = 88;
    return &a_test;
}
//local variable：局部变量

//改成一个函数，这个函数返回的类型是int *，返回数组array_normal。
//系统分配的空间，栈上分配空间
int * test_3(){
    int array_normal[10];
    array_normal[0] = 77;
    return array_normal;
}
int main()
{
    // int *a_ptr = test_1();//第一个函数能正常执行
    
    // // int *b_ptr = test_2(); // Segmentation fault
    // // int *c_ptr = test_3();//Segmentation fault
    // std::cout << *a_ptr << std::endl;
    // // std::cout << *b_ptr << std::endl;
    // // std::cout << *c_ptr << std::endl;
    // free(a_ptr);

    int *q = new int;
    int *ptr_int = new int[10];
    int n = 100;
    int *ptr_1 = new int[n];
    ptr_1[0] = 100;
    std::cout << "ptr_1:" << ptr_1[0] << std::endl;
    delete ptr_1;
    std::cout << "ptr_1:" << ptr_1[0] << std::endl;
    return 0;
}
