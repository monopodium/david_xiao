#include <iostream>
#include <vector>
// i : input
// o :output
// stream:流
//namespace：命名空间
//家族编号
//大观园+贾宝玉
//stand
using std::cout;
using std::endl;
/* this is the first c plus plus class*/
//scope
//declared:声明
void printAnsewer(int x);
class Coordinate {
protected:
    int x;
    int y;
    public:
        void setX(int Inx) { x = Inx; };
        int getX() { return x; };
        Coordinate(){};
        Coordinate(int xIn, int yIn) : x(xIn), y(yIn){};
};
void printLength(std::string a) {
    cout << "Length is: "
    << a.size()
    << endl;
}
int main()
{
    // Coordinate a(4,-3);
    // Coordinate b = a;
    // cout << a.getX() << endl;
    // cout << b.getX() << endl;
    // a.setX(8);
    // cout << a.getX() << endl;
    // cout << b.getX() << endl;
    // std::vector<Coordinate> coords(2);
    int a = 97;
    std::cout << (char)a << std::endl;
    printLength("");
    // << std::endl;
    return 0;
}
void printAnsewer(int x){
    cout << "The answer to life,the universe & everything "
    << x << " right " << std::endl;
}
//run : ./learn

//object file
//compile:编译
//compiler:编译器 ：g++
//-rwxr-xr-x

//第一个字母代表是不是文件夹

//d rwx r-x r-x

// 自己的权限
// r:read 读的权限
// w:write 写的权限
// x:execute 执行的权限

// 自己所在组内其他人的权限
// r-x：自己所在组内其他人不可以写，但是可以读或者执行

//其他不相干的用户的权限
//r-x：也可以读，不可以写，但是可以执行
//01001001000001111001: instruction
//01001001000001111001
//01001001000001111001


//用户本人：msms
//用户组：
//系统用户： root


