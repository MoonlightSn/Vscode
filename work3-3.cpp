#include <cstdio>
#include <cstring>
int main() {
    char s[10];
    int count[10]={0};
    for(int i=0;i<=10000;i++) {
        memset(s,0,sizeof(s));
        sprintf(s,"%d",i);
        for(int j=0;j<strlen(s);j++) {
            switch(s[j]) {
                case '1': count[1]++; break;
                case '2': count[2]++; break;
                case '3': count[3]++; break;
                case '4': count[4]++; break;
                case '5': count[5]++; break;
                case '6': count[6]++; break;
                case '7': count[7]++; break;
                case '8': count[8]++; break;
                case '9': count[9]++; break;
                default : count[0]++; break;
            };
        }
    }
    for(int i=0;i<10;i++) {
        printf("count of num %d is %d\n",i,count[i]);
    }
    return 0;
}