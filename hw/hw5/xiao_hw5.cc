#include<iostream>  
using namespace std;



void changevalue(float b[])
{
    for(int i = 0;i<6;i++)
    {
        b[i] = 6.6;
    }
}

void swap(int&a,int&b)
{
    int temp = a;
    a = b;
    b = temp/2;
}

void changefirst(char b[])
{
    b[0] = 'D';
}

int main(){
    cout<<"作业一为"<<endl;

    float array[6] = {0,0,0,0,0,0};

    changevalue(array);

    for(int j = 0;j<6;j++)
    {
        cout<<"array中的元素为："<<array[j]<<endl;
    }
   
    cout<<"第二个作业是："<<endl;
    
    int a = 100;
    int b = 240;

    swap(a,b);
    cout<<"a的值为："<<a<<"    "<<"b的值为："<<b<<endl;

    cout<<"第三个作业是："<<endl;

    char list_num[]= {"Savid，下次我扎双马尾，方便你驾驶哦！！！"};

    cout<<"修改前的数组为："<<list_num<<endl;

    changefirst(list_num);

    cout<<"修改后的数组为："<<list_num<<endl;
    return 0;
}

//斜杠
//当前目录
//copy path :/home/msms/learn_cpp/hw/hw5/xiao_hw5.cc
//copy relative path: hw/hw5/xiao_hw5.cc
//vscode打开的是哪一个目录
//relative path什么时候起作用：是在bash所在目录拼接上relative path能找到对应文件的时候起作用
///home/msms/learn_cpp/hw/hw5/xiao_hw5.cc
///home/msms/learn_cpp/hw/hw/hw5/xiao_hw5.cc
