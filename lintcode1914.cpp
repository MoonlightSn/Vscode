#include <map>
#include <set>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
using namespace std;

map<int,int> id;
set<int> s;
// 第一版
int minItem1(vector<int> &ids, int m) {
    // write your code here
    for(int i=0;i<ids.size();i++) {
        s.insert(ids[i]);
        if(!id.count(ids[i])) id[ids[i]]=0;
        id[ids[i]]++;
    }
    int n=id.size(),i=0,sum=0;
    int a[n];
    for(set<int>::iterator p=s.begin();p!=s.end();p++) {
        a[i]=id[*p];
        i++;
    }
    sort(a,a+n);
    for(int i=0;i<n;i++) {
        sum+=a[i];
        if(sum>=m) return sum-m?n-i:n-i-1;
    }
}

int minItem2(vector<int> &ids, int m) {
    vector<int> a1; //记录id次数
    s.clear();
    int j=-1,sum=0;   
    for(int i=0;i<ids.size();i++) {
        if(!s.count(ids[i])) { //如果集合中没有ids[i]，
            a1.push_back(1);
            j++;
        }
        else a1[j]++;  // 当顺序变了这个地方问题很大，终于调试出来了
        s.insert(ids[i]);
    }
    int n=a1.size();
    sort(a1.begin(),a1.end());
    for(int i=0;i<a1.size();i++) {
        sum+=a1[i];
        if(sum==m) return n-i-1;
        else if(sum>m) return n-i;
    }
}

int main () {
    string s;
    vector<int> nn;
    int x,m;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
        if(!isdigit(s[i])) s[i]=' ';
    stringstream ss(s);
    while(ss>>x) nn.push_back(x);
    cin>>m;
    cout<<minItem1(nn,m)<<endl;
    return 0;
}