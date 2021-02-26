#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
#include <cctype>
using namespace std;

int main () {
    vector<int> a;
    int x;
    /*string s;
    cin>>s;
    for(int i=0;i<s.length();i++)
        if(!isdigit(s[i])) s[i]=' ';
    stringstream ss(s);
    while(ss>>x) a.push_back(x);
    */
    while(cin>>x) a.push_back(x); 
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
    for(int i=0;i<a.size();i++) {
        int flag = 1;
        for(int j=0;i-j>=0;j++) {
            if(a[i-j]<a[i]) {
                printf("%d ",a[i-j]);
                flag--;
                break;
            }
        }
        if(flag) printf("%d ",a[i]);
    }
    return 0;
}