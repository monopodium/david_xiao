#include<iostream>  
using namespace std;
 
//输入圆的一个直径，求圆的面积
int main()
{
    double d;
    double area;
    double r;
    cin>>d;
    cout<<"你输入的圆的直径是"<<d<<endl;
    r=d/2;
    area = 3.14*(r*r);
    cout<<"所以david的头的面积是"<<area<<endl;
    return 0;
}