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
    vector<int> arr(n,0);
    int counter=0;
    
    rep(i,0,n){
        cin>>arr[i];
    }
    int i=0;
    int indexChange=0;
    while(i<arr.size()){
        int x=arr[i]-i-indexChange-1;
        if (x>0){
            counter+=x;
            indexChange+=x;
        }
        i++;
    }
    cout<<counter<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}