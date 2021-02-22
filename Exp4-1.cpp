#include <cstdio>
long long f(int n) {
    long long m=n?f(n-1)*n:1;
    return m;  
}
long long ff(int n, int m) {
    return f(n)/(f(m)*f(n-m));
}
int main () {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d %d\n",f(n),f(m));
    printf("%d\n",ff(n,m));
    return 0;
}
//问题在于数据溢出输入25 12 都不行