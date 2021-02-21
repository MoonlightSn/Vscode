#include <iostream>
using namespace std;

template <typename T>
T sum(T* begin, T* end) {
    T ans = 0;
    for (T* p = begin; p!= end; p++) {
        ans=ans+ *p;
    }
    return ans;
}

int main(){
    int a[]={1,2,3,4};
    double b[]={1.0,2.0,3.0,4.0};
    cout<<sum(a,a+4)<<endl;
    cout<<sum(b,b+4)<<endl;
    return 0;
}