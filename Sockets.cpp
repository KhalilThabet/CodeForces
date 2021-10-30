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
struct lowerr
{
    template<class T>
    bool operator()(T const &a, T const &b) const { return a > b; }
};

void solve(){
    int n,m,k;cin>>n>>m>>k;cin.ignore();
    int x=n;
    vector<int> Stock;
    for (;x--;){
        int a;cin>>a;Stock.pb(a);
    }
    sort(Stock.begin(),Stock.end(),lowerr());
    int total=k;
    int i=0;
    while (total<m && i<n){
        total--;
        total+=Stock[i];
        i++;
    }
    if (total<m) cout<<-1;
    else cout<<i;



}

int32_t main(){
    fastio();
    int Test=1;
    //cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}