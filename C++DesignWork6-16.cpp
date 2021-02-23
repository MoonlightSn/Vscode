#include <iostream>
using namespace std;
int main() {
    int a=0;
    int *p=&a;
    int&r=a;
    *p=10;
    cout<<a<<endl;
    r=5;
    cout<<a<<endl;
    return 0;
}
// 熟悉引用和指针的用法