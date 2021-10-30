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

bool Prime(int n) {
  for (int i = 2; i < (n/2)+1; i++) {
    if (n % i == 0) return false;
  }
  return true;
}

vector<int> divv(int n){
    vector<int> v;
    for(int i=2;i<(n/2)+1;i++){
        if(n%i==0 && Prime(i)) v.pb(i);
    }
    return v;
}
void solve(){
    int n;cin>>n;cin.ignore();
    int turn =0;//0 alice
    if (n>1) {
        vector<int> v=divv(n);
        int i=v.size();
        
        while(i!=0){      
            n-=v[i-1];
             
            turn=abs(turn-1);
            if (Prime(n)) break;
            v=divv(n);
            i=v.size();
            
        }
        if(turn==0) cout<<"Bob\n";
        else cout<<"Alice\n";
    }
    else cout<<"Bob\n";

}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}