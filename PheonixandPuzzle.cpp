#include <algorithm>
#include <cmath>
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
#define sz(x)                           (int)((x).size())
#define pii                             pair<int,int>
#define rep(i,a,b)                      for(int i=a;i<b;i++)
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;

int verif(long double n){
    if(n==2) return 1;
    else if(n<2) return 0;
    else {
        verif((long double)(n/2));
    }


}
int verif1(long double n){
    if(n==2) return 1;
    else if(n<2) return 0;
    else {
        verif(sqrt(n));
    }
}


void solve(){
    ll n;cin>>n;
    if(verif(n)==0 && verif1(n)==0) cout<<"NO\n";
    else{ cout<<"YES\n";}
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int Test;
    cin>>Test;
    while(Test--) solve();
    return 0;
    
    return 0;
}