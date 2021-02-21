#include <cstdio>
#include <cstring>
int main () {
    int flag=0,count=0;
    char s[100],t[100];
    printf("input sequence\n");
    scanf("%s",t);
    printf("input subsequence\n");
    scanf("%s",s);
    for(int i=0;i<strlen(s);i++) {
        for(int j=flag;j<strlen(t);j++) {
            if(s[i]==t[j]) {
                putchar(s[i]);
                flag=j;
                count++;
                break;
            };
        }
    }
    printf("\n");
    if(count==strlen(s)) printf("OK\n");
    else printf("not OK\n");
    return 0;
}