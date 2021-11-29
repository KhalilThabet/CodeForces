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

int ab(string s){
    int a=0;
    rep(i,0,s.size()-1){
        if (s[i]=='a' && s[i+1]=='b') a++;
    }
    return a;
}
int ba(string s){
    int a=0;
    rep(i,0,s.size()-1){
        if (s[i]=='b' && s[i+1]=='a') a++;
    }
    return a;
}
void solve(){
    string s; cin>>s;
    
    s[s.size()-1]=s[0];
    cout<<s<<endl;

}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}