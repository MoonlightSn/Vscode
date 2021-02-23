#include <cstdio>
int main() {
    double f;
    for(f=2;f>1;f-=1e-6);
    printf("%.7f\n",f);
    printf("%.7f\n",f/4);
    printf("%.1f\n",f/4);
    return 0;
}