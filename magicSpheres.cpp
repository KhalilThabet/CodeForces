#include <algorithm>
#include <iostream>
#include <string>
#include <vector>
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
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;


void solve(){
    ll a,b,c;cin>>a>>b>>c;cin.ignore();
    ll x,y,z;cin>>x>>y>>z;cin.ignore();

    long long t[3]={0,0,0};
    t[0]=a-x;
    t[1]=b-y;
    t[2]=c-z;
    ll bol=0;
    int p=0;
    rep(i,0,3){
        
        if(t[i]<0) t[i]*=2;
        bol+=t[i];
        if(t[(i%3)]>0 && t[(i+1)%3]>0 && t[(i+1)%3]%2 && t[(i)%3]){
            p=1;
        }


    }
    if(bol>0) cout<<"Yes"<<endl;
    else if(bol==0 && p==0) cout<<"Yes"<<endl;
    
    else cout<<"No"<<endl;
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    
    ll Test=1;
    while(Test--) solve();
    return 0;
    
    return 0;
}