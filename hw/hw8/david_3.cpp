#include<iostream>
using namespace std;
// 思路一：嵌套循环
// 我们的元素只会是大于等于0小于等于9的整数
// 我先统计0在这个数组里面出现的次数
// 设一个变量从

// 数组里面，我们的元素只会是大于等于0小于等于9的整数
// 不要用嵌套的循环，反而是用一个数组来存最终的结果
// 最终想要得到的结果是：
// number_item[0] = 0出现的次数
// number_item[1] = 1出现的次数
//。。。

// number_item[9] = 9出现的次数

//调研malloc的简单机制

//反转数组
//1.1
//输入：[1,2,3,4,5]
//输出：[5,4,3,2,1]

//1.2练习，只把index是偶数的位置反转
//
//[1,2,3,4,5,6,7,8,9]
//[9,2,7,4,5,6,3,8,1]
//


int main()
{  
    int array_1[12]={1,3,4,5,5,2,1,2,3,1,8,5};
    for(int x =0;x<=9;x++)
    {
        int m=0;
        for (int i=0;i<12;i++)
        {   
            if (array_1[i]==x)
            {   
                m++;
            } 
        }
        cout<<"x"<<x<<"个数："<<m<<endl;
    }
    return 0;
}
