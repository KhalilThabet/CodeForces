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
    int n;
    cin>>n;

    char c;
    cin>>c;

    string s;
    cin>>s;
    
    int x=0;
    for(int i=0;i<n;i++){
    if(s[i]==c)x++;
    }
    if(x==n)cout<<0<<endl;
    else if(s.rfind(c)+1>n/2){cout<<1<<endl;
    cout<<s.rfind(c)+1<<endl;}
    else cout<<2<<endl<<n<<" "<<n-1<<endl;



    
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;cin.ignore();
    while(Test--) solve();
    
    
    return 0;
}   