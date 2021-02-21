#include <cstdio>
#define INF 10000000
#define maxn 100000
#include <cstring>
/*
// No.1
int main () {
    int d,count=0;
    while(scanf("%d",&d)==1) count++;
    printf("%d\n",count);
    return 0;
}
*/
// No.2
/*int main () {
    int d,mind=INF;
    int maxd=-INF;
    int count=0;
    float aved=0;
    while(scanf("%d",&d)==1) {
        aved=aved+d;
        count++;
        if (mind>d) mind=d;
        if (maxd<d) maxd=d;
    };
    printf("%d %d %f\n",maxd,mind,aved/count);
    return 0;
}*/
// No.3
// No.4
/*
int main () {
    int maxd=-INF;
    int Scd=-INF-1;
    int d;
    while(scanf("%d",&d)==1) {
        if(maxd<d) maxd=d;
        if(maxd!=d&&Scd<d) Scd=d; //bug非常多
    }
    printf("%d %d\n",maxd,Scd);
    return 0;
    }
    */
int main() {
    char s[maxn];
    scanf("%s",s);
    int tot=0;
    for (int i=0;i<strlen(s);i++)
    if(s[i]=='1') tot++;
    printf("%d\n",tot);
    return 0;

}