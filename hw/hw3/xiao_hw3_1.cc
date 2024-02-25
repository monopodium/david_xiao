#include<iostream>  
using namespace std;

//如果说局部变量就能满足功能的实现，就不要去定义全局变量
//


double myFunction(int number1);

int main(){
    int number1;
    cout<<"请输入数字"<<endl;
    cin>>number1;
    double result = myFunction(number1);
    cout<<"y的值为"<<result<<endl;

    return 0;
}

double myFunction(int number1){
    //让变量各司其职y = f(number1)
    double result;
    if(number1 >0){
        result = number1+2;
    }
    else if(number1 == 0){
        result = 444;
    }
    else if(number1 <0){
        result = number1/2;
    }
    return result;
}
