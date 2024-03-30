#include <iostream> 
using namespace std;

int main(){
    //抽象成函数
    //改成用户输入的字符串char_list.和char_sub
    std::string char_list = "flowflowerfull";
    std::string char_sub = "full";
    

    bool flag = false;

    int match_index = -1;
    for (int index_list = 0; index_list < 14; index_list++)
    {
        int index_sub;
        for (index_sub = 0; index_sub < 4; index_sub++)
        {
            if(char_list[index_list+index_sub]!=char_sub[index_sub]){
                break;
            }
        }
        if(index_sub==4){
            flag = true;
            match_index = index_list;
            break;
        }
    }
    std::cout << "flag:" << flag << " match_index:" << match_index << std::endl;
    return 0;
}