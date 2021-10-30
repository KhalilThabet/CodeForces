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
    int n;cin>>n;
    int arr[n],arr1[200001]={0};
    for (int i=0;i<n;i++){
        cin>>arr[i];
        rep(j,0,i){
            arr1[arr[j]+arr[i]]++;
        }
    }
    int mx=0;
    rep(i,0,200001) mx=max(mx,arr1[i]);
    cout<<mx;

}

int32_t main(){
    fastio();
    int Test=1;
    // cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}