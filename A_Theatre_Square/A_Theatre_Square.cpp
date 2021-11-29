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
    int n,m,a;cin>>n>>m>>a;cin.ignore();
    int surface=(m/a)*(n/a);
    int resteHigh=0,resteLow=0;
    if (n%a) resteHigh=(m/a);
    if (m%a) resteLow= n/a;
    cout<<surface+resteHigh+resteLow+(((m%a!=0 && n%a!=0 )&& (n*m)%(a*a)!=0)?1:0)<<endl;
}

int32_t main(){
    fastio();
    int Test=1;
    while(Test--) solve();

    return 0;
}