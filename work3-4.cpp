# include <cstdio>
# include <cstring>
int main () {
    char s[10000];
    int cycle=0;
    scanf("%s",s);
    for(int i=1;i<strlen(s)&&!cycle;i++)
        for(int j=0;(j<strlen(s)-i)&&(s[j]==s[j+i]);)
            if((++j)==strlen(s)-i) cycle=i;
    cycle?printf("%d\n",cycle):printf("%d\n",strlen(s));
    return 0;
}