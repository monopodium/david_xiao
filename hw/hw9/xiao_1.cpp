//思路一：嵌套循环
// 我们的元素只会是大于等于0小于等于9的整数
// 我先统计0在这个数组里面出现的次数
// 设一个变量从
///数组里面，我们的元素只会是大于等于0小于等于9的整数
//不要用嵌套的循坏，反而是用一个数组来存最终的结果
//最终想要得到的结果是：
// number_item[0] = 0出现的次数
// number_item[1]= 1出现的次数
// number_item[9]=9出现的次数
//调研malloc的简单机制
//反转数组
//输入：[1,2,3,4,5]
//输出：[5,4,3,2,1]
//只把index偶数的位置反转
//
#include<iostream>  
using namespace std; 

void func1(int arr[],int result[])
{   

    for(int i = 0; i<11;i++)
    {
        result[arr[i]]++;

    }
}

void fun2(int arr_1[],int size)
{   
    int start = 0;
    int end = size - 1;
    for(int i =0 ;i<size/2;i++)
    {
        int temp = arr_1[start];
        arr_1[start] = arr_1[end];
        arr_1[end] = temp;
        start ++;
        end --;
    }
}
//
void fun3(int arr_2[],int num)
{
    // size_1 = 1;
    int num_true = num / 2;
    for (int i = 0; i < num_true; i++)
    {   
        if(i%2==0)
        {
            int temp = arr_2[i];
            arr_2[i] =  arr_2[num -1-i];
            arr_2[num -1-i] = temp;

        }
        // cout << "i:" << i << std::endl;
        // for (int j = 0; j < size_1; j++)
        // {
        //     cout << arr_2[j]<<" ";
        // }
        // cout << std::endl;
    }

}

int main()
{   

    int arr[] = {5,4,3,1,2,9,8,6,7,3,6};
    int result[11] = {0,0,0,0,0,0,0,0,0,0,0};
    func1(arr,result);

    for(int i = 0;i<11;i++)
    {
        cout<<result[i];
    }
    cout<<endl;

    int arr_1[] = {9,6,5,3,1};
    int size = sizeof(arr_1)/sizeof(arr_1[0]);

    fun2(arr_1,size);

    for(int i = 0;i<5;i++)
    {
        cout<<arr_1[i];
    }
    cout<<endl;

//让用户输入一个n, 用户再输入n个数字
//用malloc分配一段空间存用户输入的数字,并且执行对应位置数字交换的过程.

    int num = 0;
    cout<<"请输入几个数字："<<endl;
    cin>>num;
    int * new_array = (int *)malloc(sizeof (int) * num);

    for(int i = 0;i<num;i++)
    {   
        int x = 0;
        cin>>x;
        new_array[i] = x;
    }
    // int size_1 = sizeof(new_array)/sizeof(new_array[0]);
    // std::cout << "size_1:" << size_1 << std::endl;
    fun3(new_array, num);

    // int arr_2[] = {1,2,3,4,5,6};

    // expected_output = {8，6，1，3，5，2，9}
    // int result_2[] = {0,0,0,0,0,0,0};
    // int size_1 = sizeof(arr_2)/sizeof(arr_2[0]);

    // cout<<size_1<<endl;
    // fun3(arr_2,size_1);

    for(int i = 0;i<6;i++)
    {
        cout<<new_array[i];
    }
    cout<<endl;
    
    return 0;
}