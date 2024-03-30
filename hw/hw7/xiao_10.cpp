#include<iostream>  
using namespace std; 
//1.打印出2-100之间所有的偶数，计算他们的乘积 
//定义一个数组，用for循环找出数组里面最大的值，最小的值，计算出数组的平均值 
//3.对数组进行排序，怎么进行排序：第一次找出数组里最小的值，第二次找到数组里面第二小的值，这样依次输出他们 @X. 

//作业一: 从大到小的一个排序
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
//i = 0 Max_number = 9
//i = 1 Max_number = 8
//i = 2 Max_number = 4
//i = 3 Max_number = 3
//i = 4 Max_number = 2
//i = 5 Max_number = 1

void sortNumber(int arr[],int result[])
{  
    int Max_num = 0;
    //从arr里面找到最大值，填到 result[0]里面，
    for(int i = 0; i<6;i++)
    {   
        if(arr[i]> Max_num)
        {
            Max_num = arr[i];
        }
        result[0] = Max_num;
    }
    //不停的找第i大的值这样的功能
    //result[1],result[2],result[3],result[4],,result[5]
    //Max_num_1
    int Max_num_1 = 0;
    //i = 1 Max_num_1= 8 [3,1,9,4,2,8] <result[0]
    //i = 2 Max_num_1 =4 < result[1]
    //i = 3 Max_num_1 = 3 < result[2]
    //i = 4 Max_num_1 = 2 < result[3]
    //i = 5 Max_num_1 = 1 < result[i-1]
    // for (int i = 1; i < 6;i++){
    //     Max_num_1 = 0;
    //     for (int j = 0; j < 6; j++)
    //     {
    //         if(arr[j]<result[i-1]){
    //             if(arr[j]>Max_num_1){
    //                 Max_num_1 = arr[j];
    //             }
    //         }
    //     }
    //     result[i] = Max_num_1;
    // }
    for(int j = 1;j<6;j++)
    {
        int Max_num_1 = 0;
        for(int i = 0; i<6;i++)
        {   
            if(arr[i]<result[j-1])
            {
                if(arr[i]> Max_num_1)
                {
                    Max_num_1 = arr[i];
                }
            }
        }
        std::cout << "Max_num_1:" << Max_num_1 << std::endl;
        result[j] = Max_num_1;
    }
}
//数组最大值
void find_Max_num(int arr[],int * Max_num)
{

    for(int i = 0; i<6;i++)
    {
        if(arr[i]>* Max_num)
        {
            * Max_num = arr[i];
        }
    }
}
// 计算数组平均数
void average_arr(int arr[],float * ave_num)
{   
    float sum = 0;
    for(int i = 0; i <6 ;i++)
    {
        sum += arr[i];
    }
    * ave_num = sum / 6;
}



int main()
{

    int arr_1[6]={3,1,9,4,2,8};
    int result[6] = {0,0,0,0,0,0};
    sortNumber(arr_1,result);
    
    //打印
    cout<<"整理数组："<<endl;
    for(int i =0;i<6;i++)
    {
        cout<<result[i]<<endl;
    }
    //数组最大值

    int maxnumber = 0;
    find_Max_num(arr_1,&maxnumber);
    cout<<"数组最大值："<<maxnumber<<endl;



    //数组平均值
    float average_num = 0;
    average_arr(arr_1,&average_num);
    cout<<"数组平均值："<<average_num<<endl;





    //作业二
    cout<<"作业二："<<endl;

    long long sum = 1;

    for(int i = 2;i < 10;i++)
    {   
        if(i % 2 == 0)
        {
            sum *= i;
        }
    }
    cout<<sum<<endl;


}