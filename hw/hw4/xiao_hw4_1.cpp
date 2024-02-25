#include<iostream>  
using namespace std;

void get_average(float b[],int len,float &output);

int main()
{
    float a,b,c,d,e;
    cout<<"请输入第一个数字: "<<endl;
    cin>>a;
    cout<<"请输入第二个数字: "<<endl;
    cin>>b;
    cout<<"请输入第三个数字: "<<endl;
    cin>>c;
    cout<<"请输入第四个数字: "<<endl;
    cin>>d;
    cout<<"请输入第五个数字: "<<endl;
    cin>>e;

    float array_list[] = {a,b,c,d,e};


    //怎么获得平均值：平均值的结果如何拿到？
    float output = 0.0;
    //用引用传参的方式，把output传进去，然后进行赋值
    get_average(array_list,5,output);

    cout<<"平均值为"<<output<<endl;
    return 0;
}


void get_average(float b[],int len,float &output)
{
    float sum = b[0] + b[1] + b[2] + b[3] + b[4];
    output = sum / len;

}