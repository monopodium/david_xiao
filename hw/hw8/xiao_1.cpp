#include<iostream>  
using namespace std; 
#include <math.h>
//练习题1：动态分配内存给基本数据类型数组
//写一个程序，使用malloc动态分配一个具有用户指定大小的double数组。
//然后，使用循环填充数组，使得数组的每个元素等于其索引值的开方。
//最后，打印数组的内容。

//练习题2：打印乘法表
//编写一个C++程序，使用嵌套循环打印一个乘法表，从2乘以2到11乘以11。

//练习题3：计算数组中每个元素的出现次数
//假设有一个已经填充好的整型数组。编写一个程序，使用嵌套循环，计算数组中每个不同元素的出现次数并打印


void  Print_mul_table()
{
    for(int i = 2 ; i<=11;i++)
    {
        for(int j = 1 ; j<= i ; j++)
        {
            cout<<j<<"*"<<i<<"="<<i*j<<"  ";
        }
        cout<<endl;
    }
}

// 声明，定义
//
// int a = 1;
// int a[10];
// 希望我们的程序能够在运行时动态分配内存空间，
// 写代码的时候不知道，运行的时候才知道。
// malloc();
void malloc_fun()
{
    int num = 0;
    cout<<"请输入数字"<<endl;
    // cin>>num;
    int *new_ptr = (int *)malloc(17);
    new_ptr[0] = 0;
    new_ptr[1] = 1;
    new_ptr[2] = 2;
    new_ptr[3] = 3;
    new_ptr[4] = 4;
    new_ptr[5] = 5;
    std::cout << "sizeof(int):" << sizeof(int) << std::endl;     // 。 4
    std::cout << "sizeof(float):" << sizeof(float) << std::endl; //4
    std::cout << "sizeof(double):" << sizeof(double) << std::endl;//8
    std::cout << "sizeof(long):" << sizeof(long) << std::endl;//4
    //长为num大小的int数组，单个Int所占空间的字节数*我们想分配的int数量
    int *new_array = (int *)malloc(sizeof(int) * num);

    for (int i = 0; i < num ; i++)
    {
        new_array[i] = pow(i,2);
    }
    for (int j = 0;j < num ; j++)
    {
        cout<<"new_array[j]:"<<new_array[j]<<endl;
    }
}

void statistical_figures(int arr[],int result[])
{
    for(int i = 0; i<9 ;i++)
    {   
        int count = 0;
        for(int j = i+1;j<9;j++)
        {   
            
            if(arr[i] == arr[j])
            {
                count ++;
                result[i] = count;
                    
            }
            
        }
    }
    for(int z = 0;z<9;z++)
        {
            cout<<z+1<<"count"<<result[z]<<endl;
        }
}



int main()
{
    malloc_fun();

    // Print_mul_table();

    int arr[]= {1,2,1,3,2,1,3,4,2};
    int result[]= {0,0,0,0,0,0,0,0,0};
    statistical_figures(arr,result);

    return 0;
}