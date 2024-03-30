#include<iostream> 
#include<algorithm>
using namespace std;
void sortNumber(int arr[], int result[]);
int main()
{
    //选变量类型的时候，要选准确的变量类型
    //定义一块空间，sum 1 
    //sum
    // size_t sum = 1;
    // for (int a = 2; a < 40; a = a + 2)
    // {
    //     cout << "a 的值：" << a << endl;
    //     sum=sum*a;
    //     cout<<"sum 的值："<<sum<<endl;        
    // }
    // cout<<"------------------------------"<<sum<<endl;  
    // for (int a = 2; a < 101; a = a + 2)
    // {
    //     cout << "a 的值：" << a << endl;
    //     int sum=sum*a;
    //     cout<<"sum 的值："<<sum<<endl;
    // }
    // std::string name = "david";

    // int number_array[] = {100, 3, 200, 1000, 400,52358,45345,1};
    // int max = number_array[0];
    // int min = number_array[0];
    // for( int i=0; i<5;i++ )
    // { 
    //     if( max<number_array[i]){
    //         max=number_array[i];
    //     }
    //     if (min>number_array[i]){
    //         min=number_array[i];
    //     }
    // }
    // cout<<"max:"<< max <<endl;
    // cout<<"min:"<< min <<endl;

    // sort(number_array,number_array+5);
    // for(int j =0; j<8;j++)
    // cout<<number_array[j]<<endl;

    //写一下测试
    int arr_test[]= {3, 1, 9, 4, 2, 8};
    int result_test[] = {0, 0, 0, 0, 0, 0};
    sortNumber(arr_test, result_test);
    for(int i=0; i<6;i++){
       cout<< result_test[i]<<endl;
    }
     return 0;
}
//arr = [3,1,9,4,2,8], result = [x,x,x,x,x]
// i = 0 
//arr = [3,1,9,4,2,8], result = [9,x,x,x,x] 
//i = 1， 目标要< result[0],
//第一步只要找到arr的最大值，填到result[0]
//arr = [3,1,9,4,2,8], result = [9,8,x,x,x] 
//i = 2, 目标要< result[1],
//要找比9小的数字里面最大的
//arr = [3,1,9,4,2,8], result = [9,8,x,x,x]
//i = 3, 目标要< result[2],
//arr = [3,1,9,4,2,8], result = [9,8,4,x,x]
void sortNumber(int arr[],int result[])
{   
  
    int min = 99999;
    for(int j = 0; j<6; j++)
    {
        if( min>arr[j]){
            min=arr[j];
        }  
        result[0]=min;  
    }

    
    //i = 1 result[i-1] = 1, arr = [3,1,9,4,2,8]
    //j = 0, arr[j] = 3, min_number = 99,min_number更新为3
    //j = 1,  arr[j] = 1, 
    //j = 2, arr[j] = 9, min_number = 3
    //j = 3, arr[j] = 4, min_number = 3
    //j = 4, arr[j] = 2, min_number = 2
    //j = 5, arr[j] = 8, min_number = 2
    //result[1] = 2
    //i = 2, result[i-1] = 2, arr = [3,1,9,4,2,8]
    //  min_number = 99999
    //j = 0, arr[j] = 3, min_number = 2?
    //多练习
    int min_number = 99;
    for (int i = 1; i < 6; i++)
    {   
        min_number=99;
        for (int j = 0; j < 6; j++)
        {   
            if(arr[j]>result[i-1]){
                if(arr[j] < min_number){
                    min_number = arr[j];
                    
                }
                std::cout << "i:" << i << std::endl;
                std::cout << "j:" << j << std::endl;
                cout << min_number << endl;
            }
        }

        result[i] = min_number;
    }

}
//先找arr里的最大值，将result[0]赋值为arr里面的最大值
//接下来要去填result[1] = ?,result[2],result[3],result[4],result[5]

//i = 1 result = [9,0,0,0,0,0]
//j = 0, j = 1, ....j = 5 [3,1,9,4,2,8]  result[i - 1]


//i = 2 result = [9,8,0,0,0,0]
//j = 0, j = 1, ....j = 5 [3,1,9,4,2,8]  result[i - 1]

    // int max_number = 0;
    // for (int i = 1; i < 6; i++)
    // {
    //     //我们要找第i次的max_number:  arr数组里 小于result[i-1]的最大值
    //     max_number = 0;
    //     for (int j = 1; j < 6; j++)
    //     {
    //         if(arr[j]<result[i-1]){
    //             if(arr[j] > max_number){
    //                 max_number = arr[j];
    //             }
    //         }
    //     }

    //     result[i] = max_number;
    // }