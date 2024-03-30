#include<iostream>  
using namespace std; 
#define PI 3.14
#define NAME "david"
//并不会像变量一样去分配内存空间
//->
//从c++代码到二进制代码，我们经历了几个流程
//预处理、编译、汇编和链接
//预处理后得到.i文件:替换define,和include
//编译阶段,得到.s文件：检查语法，将c++代码转成汇编代码
//xiao
void func();
int main()
{
    const float pi = 3.14; //变成常量
    cout << PI * 5 * 5 << endl;
    cout << pi * 5 * 5 << endl;
    cout << NAME << endl;
    func();
    return 0;
}

void func(){
    int aa = 0;
    cout << "aa:" << aa << endl;
    cout << "&aa:" << &aa << endl;
    aa++;
    static int bb = 0;
    cout << "bb:" << bb << endl;
    bb++;
    cout << "aa++:" << aa << endl;
    cout << "bb++:" << bb << endl;
    const int cc = 0;
    cout << "cc的地址:" << &cc << endl;

}
// aa:0
// bb:0
// aa++:1
// bb++:1
//david:
// aa:0
// bb:1
// aa++:1
// bb++:2
//xiao aa:0
//xiao bb:2
//aa++:1
//bb++3

