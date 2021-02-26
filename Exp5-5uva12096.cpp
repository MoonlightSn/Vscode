#include <iostream>
#include <set>
#include <cctype>
#include <map>
using namespace std;
typedef set<int> Set;
map<Set,int> IDcache;

int ID (Set x) {
    if(IDcache.count(x)) return IDchahe[x];

}
