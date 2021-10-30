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


void solve(){
    string s;cin>>s;int i=0;
    for (char e:s){
        if (toupper(e)=='A') i++;
    }
    if (i<s.size()/2+1) cout<<2*i-1;
    else cout<<s.size()<<endl;
}

int32_t main(){
    fastio();
    int Test=1;
    // cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}