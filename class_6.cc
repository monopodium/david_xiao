#include <iostream>
using namespace std;

int main ()
{
 // 局部变量声明
 int a = 20;

 // do 循环执行
 do
 {
    cout << "a 的值：" << a << endl;
    a = a + 1;
 }while( a < 20 );

 while(a<20){
    cout << "a 的值while:" << a << endl;
 }

 return 0;
}