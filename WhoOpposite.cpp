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
    int a,b,c,i=0;cin>>a>>b>>c;
    int resultat=0;
    
    int difference=abs(a-b);
    int total=difference*2;

    
    if ((abs(a-b)==1 && (a>4 || b>4)) || total<c ||a>total || b>total) resultat=-1;
    else if (c<difference+1 && c+difference<=total) resultat=c+difference;
    else if (c>difference && (c+difference)%total!=a && (c+difference)%total!=b) resultat=(c+difference)%total; 
    cout<<resultat<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}