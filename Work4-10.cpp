#include <cstdio>
#define max_h 1000000
int main() {
    const int l=1; //定义每个格子边长为1
    int n,m;
    float max_a=-max_h,min_a=max_h;
    float WaterLevel;
    printf("input n,m [1,30)\n");
    scanf("%d %d",&n,&m);
    float a[n][m];
    printf("input Height of mesh\n");
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            scanf("%f",&a[i][j]);
        }
    }
    printf("input volume of water\n");
    float v;
    scanf("%f",&v);
    //求最高高度和最低高度
    for(int i=0;i<n;i++) {
        for(int j=0;j<m;j++) {
            printf("%8.2f ",a[i][j]);
            if (max_a<a[i][j]) max_a=a[i][j];
            if (min_a>a[i][j]) min_a=a[i][j];
        }
        printf("\n");
    }
    // printf("%f %f\n",min_a,max_a);
    float v_Cal=0.0;
    float dist=100;
    float upper_bound=max_a,lower_bound=min_a;
    while(dist>1e-6) {
        v_Cal=0.0;
        // printf("%f %f\n",lower_bound,upper_bound);
        WaterLevel = (upper_bound+lower_bound)/2;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
               if(a[i][j]<WaterLevel) v_Cal=v_Cal+(WaterLevel-a[i][j])*l*l;
            } 
        }
        // printf("%f %f\n",v,v_Cal);
        if(v_Cal>v) {
            upper_bound=WaterLevel;
            dist=v_Cal-v;
            }
        else {
            lower_bound=WaterLevel;
            dist=v-v_Cal;
        }
    }
    printf("Level of water is %.3f\n",WaterLevel);
    return 0;
}
