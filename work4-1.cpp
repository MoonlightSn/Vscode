# include <cstdio>
# include <cstring>
char s[10][9];

bool move(char cc,int xx, int yy, int xxx, int yyy) {
    bool flag;
    switch(cc) {
        case 'G': {
            for(int i=xx-1;yy==yyy&&i>yyy;i--) if(s[i][yy]!='+') flag=false;
            break;
        }
        case 'R':{

        }
        case 'H': {

        }
        case 'C': {

        }
    }
}
int main() {
    memset(s,'+',sizeof(s));
    char c;
    int x,y;
    while(scanf("%c %d %d",&c,&x,&y)!=EOF) {
        if(s[x][y]!='+') printf("Invalid input!\n");
        else if(x<0||x>9||y<0||y>8) printf("Invalid input!\n");
        else if(c=='B'&&(x<7||y<3||y>5)) printf("Invalid input!\n");
        else if(c=='G'&&(x>3||y<3||y>5)) printf("Invalid input!\n");
        else s[x][y]=c;
    }
    for(int i=0;i<10;i++) {
        for(int j=0;j<9;j++) {
            printf("%c ",s[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}