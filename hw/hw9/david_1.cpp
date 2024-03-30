//想一个解决问题的思路
//开始写代码

//Input:
//array [6] = [1,4,6,7,9,4], 随机的,每个数组都是 number都满足：　0=<number<=9

//Output:
// count_array       [0,1,2,3,4,5,6,7,8,9]
// count_array[10] = [0,1,0,0,2,0,1,1,0,1]

//alg:
// 我只统计0出现的次数,
//
// int count_array[10];
// //= [ 0, 1, 0, 0, 2, 0, 1, 1, 0, 1 ] int count_0 = 0;
// int count_1 = 0;
// int count_2 = 0;
// int count_3 = 0;
// //....
//count_array[index]

// for(int i=0;i<6;i++){
//     if (array[i]==0){
//         count_0=count_0+1;
//     }
// }
#include<iostream>
using namespace std;

//函数参数, 返回值
//
//
void counter(int array[],int count_array[10],int array_size){

    for (int i = 0; i < array_size;i++){
        int x = array[i];
        count_array[x] = count_array[x] + 1;
    }
    
    
}

int main()
{
    // 用户来输入一个n,再输入n个0-9的数字,我们把n个数字存到数组里面.
    //  n = 3
    //  8,6,7
    // array_input [] = {8,6,7};
    // malloc
    //
    int n;
    cin >> n;
    cout << "n:" << n<<endl;

    int *array_input=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        array_input[i]=x;
    }
    int count_array_output[10]={0,0,0,0,0,0,0,0,0,0};
    counter(array_input, count_array_output,n);
    for(int i=0;i<10;i++){
        cout<<i<<":"<<count_array_output[i]<<endl;
    }
    return 0;
}
// count array
// for(int i =0;i<6;i++){

// }