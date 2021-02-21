#include <cstdio>
#include <cstring>
int main () {
    int score=0,count;
    char s[80];
    scanf("%s",s);
    for(int i=0;i<strlen(s);){
        count=1;
        while(s[i]=='O') {
            score=score+count;
            count++;
            i++;
        }
        i++;
    }
    printf("%d\n",score);
    return 0;
}