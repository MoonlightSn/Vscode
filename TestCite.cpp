#include <iostream>
using namespace std;
void swap2(int* a, int* b) {
    int c=*a;
    *a=*b;
    *b=c;
}
int main() {
    int a=3,b=4;
    swap2(&a,&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}