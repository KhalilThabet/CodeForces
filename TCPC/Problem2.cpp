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
    int a,b,n;
    cin>>a>>b;
    cin>>n;
    for (int i=0;i<n;i++){
        int cons;
        cin>>cons;
        if (cons<=1000){
            cout<<cons<<" "<<cons*a<<'\n';
        }
        else{
            cout<<cons<<" "<<1000*a+(cons-1000)*b<<'\n';
        }
    }
}
 
int32_t main(){
    fastio();
    int c =1;
    while(c--) solve();
    
    
    return 0;
}