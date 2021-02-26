 #include <iostream>
 #include <string>
 #include <set>
 #include <sstream>
 using namespace std;
 set<string> dict;
 int main () {
     string s,buf;
     while(cin>>s) {
         for (int i=0; i<s.length();i++) {
             // cout<<s[i]<<" ";
             if (isalpha(s[i])) s[i]=tolower(s[i]);
             else s[i]=' ';
             cout<<s[i]<<" ";
         }
         stringstream ss(s);
         while (ss>>buf) {
             dict.insert(buf);
             cout<<buf<<endl;
         }
     }
     for(set<string>::iterator it =dict.begin();it!=dict.end();it++)
     cout<<*it<<endl;
     return 0;
 }