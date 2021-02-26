#include <iostream>
using namespace std;
int main () {
    string s;
    while(cin>>s) {
        cout<<s<<endl;
    }
    return 0;
}
//通过测试发现对于string类型的s，输入就是一整个字符串，遇到空格则结束。