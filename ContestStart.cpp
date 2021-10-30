#include <algorithm>
#include <iostream>
#include <cmath>
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
#define sz(x)                           (ll)((x).size())
#define pii                             pair<ll,ll>
#define rep(i,a,b)                      for(ll i=a;i<b;i++)
#define fastio()ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;


void solve(){
    ll n,x,t;cin>>n>>x>>t;cin.ignore();ll total;
    if(n%10==0){
    total=0;
    ll start_time,end_time;
    for(ll i=0;i<n;i++){
        start_time = i*x;
        end_time = start_time+t;
        ll k=i+1;ll a;
        while(1){
            a=k*x;
            if(a>start_time && a<=end_time && a<n*x) {
                total++;k++;
                }
            else break;
        }
    }
    }
    else total=(t-x)*(t/2);
    cout<<total<<endl;  

}

int32_t main(){
    fastio();
    ll Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}