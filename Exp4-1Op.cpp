#include <cstdio>
unsigned long long int f(int n) {
    return n?f(n-1)*n:1;  
}
unsigned long long int ff(int n, int m) {
    if(m<n-m) m=n-m;
    unsigned long long int nn=1;
    for(int i=m+1;i<=n;i++) nn*=i;
    return nn/f(n-m);
}
int main () {
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d %d\n",f(n),f(m));
    printf("%d\n",f(n-m));
    printf("%d\n",ff(n,m));
    return 0;
}