#include <cstdio>
int main() {
    char a[5][5],flag;
    int x,y;
    for(int i =0;i<5;i++) {
        for(int j=0;j<5;j++) {
            a[i][j]=i+j+65;
            putchar(a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    a[2][2]=' ';
    x=2;
    y=2;
    for(int i =0;i<5;i++) {
        for(int j=0;j<5;j++) {
            putchar(a[i][j]);
        }
        printf("\n");
    }
    while(scanf("%c",&flag)==1&&flag!='0') {
        switch(flag) {
            case 'A': {
                a[x][y]=a[x-1][y];
                a[--x][y]=' ';
                break;
            }
            case 'B': {
                a[x][y]=a[x+1][y];
                a[++x][y]=' ';
                break;
            }
            case 'L': {
                a[x][y]=a[x][y-1];
                a[x][--y]=' ';
                break;
            }
            case 'R': {
                a[x][y]=a[x][y+1];
                a[x][++y]=' ';
                break;
            }
            default: break;
        }
    }
    for(int i =0;i<5;i++) {
        for(int j=0;j<5;j++) {
            putchar(a[i][j]);
        }
        printf("\n");
    }
    return 0;
}