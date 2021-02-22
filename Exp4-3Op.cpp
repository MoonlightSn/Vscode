#include <cstdio>
#include <cmath>
int is_Prime(int n) {
    if (n==1) return 0;
    int m=floor(sqrt(n)+0.5); //四舍五入
    for(int i=2;i<=m;i++) if(n%i==0) return 0; //减小计算成本
    return 1;
}
int main () {
    int n;
    scanf("%d",&n);
    is_Prime(n)?printf("yes\n"):printf("no\n");
    return 0;
}