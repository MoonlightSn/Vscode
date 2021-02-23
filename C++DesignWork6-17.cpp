# include <iostream>
using namespace std;
int main() {
    // int a=5;
    int *p; //这段代码的问题在于指针p并没有分配到地址，因此直接*p给地址里的变量赋值就是错误操作
    *p=9;  
    cout<<"The value at p: "<<*p;
    return 0;
}