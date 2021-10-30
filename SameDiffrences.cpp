#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define ll                             long long
#define pb                              push_back
#define ppb                             pop_back
#define pf                              push_front
#define ppf                             pop_front
#define all(x)                          (x).begin(),(x).end()
#define uniq(v)                         (v).erase(unique(all(v)),(V).end())
#define sz(x)                           (int)((x).size())
#define pii                             pair<int,int>
#define rep(i,a,b)                      for(ll i=a;i<b;i++)
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;


void solve(){
    ll n;cin>>n;
    ll arr[n];
    ll sum=0;
    map<ll,ll> m;
    rep(i,0,n){
        int x;cin>>x;arr[i]=x;
        sum+=m[x-i];
        m[x-i]++;
    }
    cout<<sum<<" ";
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int Test;
    cin>>Test;
    while(Test--) solve();

    return 0;
}