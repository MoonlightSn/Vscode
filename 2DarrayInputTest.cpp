#include <cstdio>
int main(){
    int n,m;
    scanf("%d %d",&n,&m);
    int a[n][m];
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) 
        scanf("%d",a[i]+j); //对于二维数组，第i行的首地址是a[i]
    }
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) printf("%d ",a[i][j]);
        printf("\n");
    }
    return 0;
}