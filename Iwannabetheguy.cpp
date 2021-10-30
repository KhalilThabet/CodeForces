#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <set>
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
    int n;cin>>n;
    int bo=0;
    vector<int> v;
    for(int k=0;k<2;k++){
        int a;cin>>a;
        for(int i=0;i<a;i++){
            int b;cin>>b;v.push_back(b);
        }
    }
    set<int> s( v.begin(), v.end() );
    for(int i=1;i<n+1;i++){
        if (s.count(i)>=1) s.erase(i);
        else bo=1;
    }
    if (s.size()==0 && bo==0) cout<<"I become the guy.";
    else cout<<"Oh, my keyboard!";
}

int32_t main(){
    fastio();
    int Test=1;
    // cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}