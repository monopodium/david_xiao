#include<iostream>  
using namespace std;  
int main()
{
    int num1, num2, num3, num4, num5, output;
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
    int value_array[] = {1,2,3,4,5}; 
    std::cout << sizeof(int) << std::endl;
    std::cout << "value_array"<<value_array+0<< std::endl;
    std::cout << "value_array"<<value_array+1<< std::endl;
    std::cout << "value_array"<<value_array+2 << std::endl;
    std::cout << "value_array"<<value_array+3<< std::endl;
    std::cout << "value_array"<<value_array+4 << std::endl;

    double value_array_double[] = {1.0,2.0,3.0,4.0,5.0}; 
    std::cout << sizeof(double) << std::endl;
    std::cout << "value_array_double"<<value_array_double+0<< std::endl;
    std::cout << "value_array_double"<<value_array_double+1<< std::endl;
    std::cout << "value_array_double"<<value_array_double+2<< std::endl;   

    char value_array_char[] = {'a','f','z','h','l'}; 
    std::cout << sizeof(char) << std::endl;
    printf("%p\n",value_array_char);
    printf("%p\n",value_array_char+1);
    printf("%p\n",value_array_char+2);


    return 0;
}