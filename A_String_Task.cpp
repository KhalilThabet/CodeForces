#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define int                             long long
#define pb                              push_back
#define ppb                             pop_back
#define pf                              push_front
#define ppf                             pop_front
#define all(x)                          (x).begin(),(x).end()
#define uniq(v)                         (v).erase(unique(all(v)),(V).end())
#define sz(x)                           (int)((x).size())
#define pii                             pair<int,int>
#define rep(i,a,b)                      for(int i=a;i<b;i++)
#define fastio()ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;
string vowel="aeouyi";
bool isvowel(char v) {
    int i=0;
    for (auto e:vowel) if (e==v) i++;
    if (i) return true;
    return false;
}

void solve(){
    string s;cin>>s;
    string replacement="";
    rep(i,0,s.size()){
        
        if (isvowel(tolower(s[i]))) continue;
        replacement+=".";
        replacement+=tolower(s[i]);
    }
    cout<<replacement<<endl;
}

int32_t main(){
    fastio();
    int Test=1;
    // cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}