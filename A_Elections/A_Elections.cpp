#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;
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
                    int a,b,c;cin>>a>>b>>c;
                    int e=max(0,max(b,c)-a+1);
                    int f=max(0,max(a,c)-b+1);
                    int g=max(0,max(a,b)-c+1);
                    cout<<e<<" "<<f<<" "<<g<<endl; 
                    
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}