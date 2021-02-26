#include <cstdio>
template<typename T>
T sum(T *begin,T* end) {
    T ans;
    for(T* p=begin;p!=end;p++) ans+=*p;
    return ans;
}
int main () {
    int a[3]={1,2,3};
    float b[4]={1.1,2.2,3.3,4.4};
    printf("%d\n",sum(a,a+3));
    printf("%f\n",sum(b,b+3));
    return 0;
}