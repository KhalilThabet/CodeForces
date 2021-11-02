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
bool isvowel(char v) {
    return (0x208222>>(v&0x1f))&1;
}

void solve(){
    string s;cin>>s;
    rep(i,0,s.size()){
        
        if (isvowel(s[i])) s.replace(i,1,"#");
    }
    s="."+s;
    rep(i,1,s.size()){
        if (s[i]>64){
            s=s.substr(0,i-1)+"."+s.substr(i,s.size()-i);
        }
        // s=s.substr(0,i-1)+"."+s.substr(i,s.size()-i);
        
    }
    s.erase(remove(s.begin(), s.end(), '#'), s.end());
    cout<<s<<endl;
}

int32_t main(){
    fastio();
    int Test=1;
    // cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}