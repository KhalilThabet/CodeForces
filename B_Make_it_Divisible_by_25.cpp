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
    int n;cin>>n;
    
    string s=to_string(n);
    int i=0;
    while (s[s.size()-1]!='0'&& s[s.size()-1]!='5'){
        s=s.substr(0,s.size()-1);
        i++;
    }
    while (s.substr(s.size()-2,2)!="00"&& s.substr(s.size()-2,2)!="25" && s.substr(s.size()-2,2)!="50" && s.substr(s.size()-2,2)!="75"){
        s=s.substr(0,s.size()-2)+s.substr(s.size()-1,1);
        i++;
        if (s.size()==2) break;
    }
    
    cout<<i<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}