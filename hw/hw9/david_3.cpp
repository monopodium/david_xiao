#include <iostream> 
using namespace std;
//{1,2,3,4,5}
//n = 5
//n/2 = 2
//i = 0 ,i = 1, 
//i = 0, {5,2,3,4,1}
//i = 1, {5,2,3,4,1}
//i = 0, n = 5, n-1-i = 4
//i + invert_index = n - 1
//index 
//第一个个数的index:0
//最后一个数的index一定是n-1
//i
void func(int array[],int array_size){
    for(int i=0;i<array_size/2;i++){
        if(i%2==0){
            int temp=array[i];
            array[i]=array[array_size-1-i];
            array[array_size-1-i]=temp;}
    }
    

}
int main(){ //int a[] = {1, 2, 3, 4}; // 5,6,7,8,9};
    //让用户输入一个n,输入n个数字,把n个数字里面的index是偶数的进行交换
    //抽象出一个函数,让这个函数去执行revert的功能

    //cout << "原来的数组:" << a[0] << a[1] << a[2] << a[3]<<std::endl;
   // << a[4] << a[5] << a[6] << a[7] << a[8] << endl;
    int n;
    cin >> n;
    cout << "n:" << n<<endl;

 
  int *array_input=(int*)malloc(n*sizeof(int));
    for(int i=0; i<n;i++){
        int x;
        cin>>x;
        array_input[i]=x;
    }
    func(array_input,n);
    for(int i=0;i<n;i++){
        cout<<i<<":"<<array_input[i]<<endl;
    }
    
    //cout<<"现在的数组:"<<a[0]<<a[1]<<a[2]<<a[3]<<std::endl;
    //<<a[4]<<a[5]<<a[6]<<a[7]<<a[8]<<endl;
    return 0;
}