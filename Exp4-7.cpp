#include <cstdio>
int sum(int* a,int n) {
    int sum=0;
    for(int i=0;i<n;i++) sum+=*(a+i);
    return sum;
}
int main() {
    int a[1000];
    int i=0;
    while(scanf("%d",a+i)==1) i++;
    printf("%d\n",sum(a,1000));
    return 0;
}