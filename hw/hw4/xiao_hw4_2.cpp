#include<iostream>  
using namespace std;

int main()
{
int index = 0;
int array_list[] = {1,2,3,4,5};

for(int i =0; i < 5;i++)
{
    cout<<"你输出的地址为"<<&array_list[i]<<endl;
}
cout<<"-----------------------"<<endl;
float array_list2[] = {1.8,2.9,3.1,4.5,5.3};

for(int i =0; i < 5;i++)
{
    cout<<"你输出的地址为"<< &array_list2[i]<<endl;
}
cout<<"-----------------------"<<endl;
double array_list3[] = {1.8738493,2.92131031,3.13132131,4.5323423,5.33422312};

for(int i =0; i < 5;i++)
{
    cout<<"你输出的地址为"<<&array_list3[i]<<endl;
}
}