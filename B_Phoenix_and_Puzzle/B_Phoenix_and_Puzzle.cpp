#include <algorithm>
#include <cmath>
#include <iostream>
#include <string>
#include <vector>
#include <math.h>
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


void solve(){
        double n;
        cin>>n;
        double b=sqrt(n/4);
        double a=sqrt(n/2);
        if (b-(int)b==0||a-(int)a==0) cout<<"YES\n";
        else cout<<"NO\n";
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