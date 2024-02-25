#include<iostream>
#include<cmath>
using namespace std;

   
int main()
{
    //让用户输入4个数字，用数组存储下来，求用户输入的平均并输出
    double x;
    cin>>x;
    double y;
    cin>>y;
    double d;
    cin>> d;
    double z;
    cin>>z;
    double b1[] = {x,y,d,z};
    double Result1=b1[0]+b1[1]+b1[2]+b1[3];
    double Result2=Result1/4;
    std::cout <<Result2<<std::endl;
    return 0;
}