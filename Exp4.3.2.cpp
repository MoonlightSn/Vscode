#include <cstdio>

int f(int n) {
    return n?f(n-1)*n:1;
}
int main () {
    printf("%d\n",f(3));
    return 0;
}