#include <iostream>
using namespace std;
int main(){
    int a=5;
    int* b=&a;
    int** c=&b;
    cout<<c<<" "<<&b<<endl;
    cout<<*c<<" "<<b<<endl;
    cout<<**c<<" "<<*b<<endl;
    return 0;

}