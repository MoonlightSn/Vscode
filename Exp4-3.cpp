#include <cstdio>
int is_Prime(int n) {
    if (n==1) return 0;
    for(int i=2;i<n;i++) if(n%i==0) return 0; //判定i<n并不会出错，在n比较大时计算成本更高
    return 1;
}
int main () {
    int n;
    scanf("%d",&n);
    is_Prime(n)?printf("yes\n"):printf("no\n");
    return 0;
}