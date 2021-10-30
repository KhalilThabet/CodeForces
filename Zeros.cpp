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
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}
void solve(){
int a,b;cin>>a>>b;cin.ignore();
int number=1;
int arr[b-a];
    for(int i=a;i<b+1;i++){
        if(Prime(i)) number*=i;
    }
string s=to_string(number);
int x=count(s.begin(),s.end(),'0');
cout<<x;
}

int32_t main(){
    fastio();
    int Test=1;
    //cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}