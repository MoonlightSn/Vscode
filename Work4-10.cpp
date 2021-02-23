#include <cstdio>
#define max_h 1000000
float a[32][32];
float b[32][32]={0};
int is_valley(int i,int j) {
    for(int ii=-1;ii<2;ii++){
        for(int jj=-1;jj<2;jj++) {
            if((a[i][j]+b[i][j])>(a[i+ii][j+jj]+b[i+ii][j+jj])) return 0;
        }
    }
    return 1;
}

int is_WaterSurround(int i,int j) {
     for(int ii=-1;ii<2;ii++){
        for(int jj=-1;jj<2;jj++) {
            if (ii==0&&jj==0) continue;
            if (b[i+ii][j+jj]) return 1;
        }
    }
    return 0;
}

int main() {
    const int l=1; //定义每个格子边长为1
    int n,m;
    int flag;
    printf("input n,m [1,30)\n");
    scanf("%d %d",&n,&m);
    // float a[n+2][m+2]; // 记录地形
    // float b[n+2][m+2]={0}; // 记录每个格子的水高，初始为0；
    printf("input Height of mesh\n");
    for(int i=1;i<n+1;i++) {
        for(int j=1;j<m+1;j++) scanf("%f",&a[i][j]);
    }
    printf("input volume of water\n");
    float v;
    scanf("%f",&v);
    for(int i=0;i<n+2;i++) {
        a[i][0]=max_h;
        a[i][m+1]=max_h;
    }
    for(int i=0;i<n+2;i++) {
        a[0][i]=max_h;
        a[n+1][i]=max_h;
    }
    /*
    for(int i=0;i<n+2;i++) {
        for(int j=0;j<m+2;j++) {
            printf("%10.2f ",a[i][j]);
        }
        printf("\n");
    }
    for(int i=0;i<n+2;i++) {
        for(int j=0;j<m+2;j++) {
            printf("%10.2f ",b[i][j]);
        }
        printf("\n");
    }
    */

   for(int i=1;i<n+1;i++) {
        for(int j=1;j<m+1;j++) {
            if(is_valley(i,j)&&b[i][j]==0) flag=1;
        }
    }
    printf("%d\n",is_valley(1,1));
    printf("%d\n",is_WaterSurround(1,1));
    return 0;
}
