#include<iostream>  
using namespace std;  
//int不会四舍五入
//IEEE 
//int *和double的地位是一样
//int *是
//

int *get_average(double b[],double &output,double array_3){
    int test = 888;
    cout << &test << endl;
    return &test;
}
//易读：不仅自己能够理解，尽量也让其他人也能够理解
//
int main()
{
    double num1 = 1.0, num2 = 2.0, num3  = 6.0,num4  = 7.0,num5 = 1.0 ,num6 = 1.0;
    double array[] = {num1,num2,num3,num4,num5};

    double output_ref = 0.0;
    int int_value = 9;
    // int *p = &int_value;
    // //p是一个房子，它是一个变量，p这个房子存着你心上人的地址
    // cout << "p:" << p << endl; //你心上人的地址，p里面存的东西
    // cout << "&p:" << &p << endl; //p房子的地址
    // cout << "*p:" << *p << endl; //你心上人房子的东西
    // // 
    // cout << "int_value:" << int_value << endl;
    // cout << "&int_value:" << &int_value << endl;
    int *p = get_average(array, output_ref, array[3]);
    cout << "p:" << p << endl;
    cout << "p:" << *p << endl;
    return 0;
}


    // cout << "b:" << b << endl;
    // double total = b[0] + b[1] + b[2] + b[3] + b[4];
    // b[0] = 9999.99;
    // double average_value = total / 5;
    // output = average_value;
    // cout << "output:" << output << std::endl;
    // cout << "&output:" << &output << std::endl;

    // array_3 = 9999.99;
    // double first_value = b[0];
    // cout << first_value << endl;
    // return b[0];


    // cout<<"array[0]:"<<array[0]<<endl;
    // cout<<"average number:"<<output<<endl;
    // cout<<"array[3]:"<<array[3]<<endl;
    // cout<<"output_ref:"<<output_ref<<endl;
    // cout<<"&output_ref:"<<&output_ref<<endl;
    // cout<<&num1<<endl;
    // cout<<&num2<<endl;
    // cout<<&num3<<endl;
    // cout<<"num4:"<<&num4<<endl;
    // cout<<"num5:"<<&num5<<endl;
    // cout<<array<<endl;
    // cout<<array+1<<endl;
    // cout<<array+2<<endl;