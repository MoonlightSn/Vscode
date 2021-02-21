#include <cstdio>
#include <cstring>
#include <cctype>
int main(){
    char s[100];
    float Cmol=12.01,Hmol=1.008,Omol=16.00,Nmol=14.01;
    float d=0.0;
    scanf("%s",s);
    s[strlen(s)]='E';
    for(int i=0;i<strlen(s);i++) {
        switch(s[i]) {
            case 'C': {
                if(isalpha(s[i+1])) d=d+Cmol;
                else d=d+Cmol*(s[i+1]-'0');
                break;
            }
            case 'H': {
                if(isalpha(s[i+1])) d=d+Hmol;
                else d=d+Hmol*(s[i+1]-'0');
                break;
            }
            case 'O': {
                if(isalpha(s[i+1])) d=d+Omol;
                else d=d+Omol*(s[i+1]-'0');
                break;
            }
            case 'N': {
                if(isalpha(s[i+1])) d=d+Nmol;
                else d=d+Nmol*(s[i+1]-'0');
                break;
            }
            default: break;
        }
    }
    printf("%f\n",d);
    return 0;
}