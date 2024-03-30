
#include <iostream>
//100个数字  1w个数字
//
int main()
{
    // int new_array[10000];
    int num = 10;
    std::cin >> num;
    int *new_array = (int *)malloc(sizeof(int) * num);

    for (int i = 0; i < num;i++){
        new_array[i] = i * i;
    }
    for (int i = 0; i < num;i++){
        std::cout << "new_array[i]:"<<new_array[i] << std::endl;
    }
    return 0;
}