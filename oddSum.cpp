#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
#define ll                             signed long long
#define pb                              push_back
#define ppb                             pop_back
#define pf                              push_front
#define ppf                             pop_front
#define all(x)                          (x).begin(),(x).end()
#define uniq(v)                         (v).erase(unique(all(v)),(V).end())
#define sz(x)                           (ll)((x).size())
#define pii                             pair<ll,ll>
#define rep(i,a,b)                      for(ll i=a;i<b;i++)
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;




ll summ(vector<ll> v){
    ll x;
    for(auto e:v) 
        x+=e;
    return x;
    }

void solve(){
    ll sum=0;
    ll n;cin>>n;cin.ignore();
    vector<ll> s;
    for(;n--;){
        ll i;cin>>i;cin.ignore();
        s.push_back(i);
    }
    ll a=summ(s);
    for(auto e:s){
         if(e<0 && e%2==0) a-=e;
    }
    // if(a%2==0) a-=minOdd(s);
    
    cout<<a;
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    ll Test=1;
    //cin>>Test;
    while(Test--) solve();
    return 0;
    
    return 0;
}