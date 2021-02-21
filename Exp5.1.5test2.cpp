#include <iostream>
using namespace std;

int sum(int* begin, int count) {
    int* p = begin;
    int ans = 0;
    for (int* p = begin; p!= begin+count; p++) {
        ans=ans+ *p;  
    }
    return ans;
}

int main() {
    int a[]={1,2,3};
    cout<<a<<endl;
    cout<<sum(a,3)<<endl;
    return 0;
}