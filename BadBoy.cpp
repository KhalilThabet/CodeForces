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
    int m,n,i,j,x1,x2,y1,y2;
    cin>>n>>m>>i>>j;cin.ignore();
    if (i<=ceil(n/2)) x1=n;
    else if(i>ceil(n/2)) x1=1;
    if (j<=ceil(m/2)) y1=m;
    else if(j>ceil(m/2)) y1=1;
    cout<<x1<<" "<<y1<<endl;
    x2=x1-1;y2=y1;cout<<x2<<" "<<y2<<endl;


}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}