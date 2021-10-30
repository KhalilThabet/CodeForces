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
    int sum=0;
    int max=0;
    int arr[n];
    int index;
    for(int i=0;i<n;i++) {
        int a;cin>>a;
        arr[i]=a;
        sum+=a;
        if (a>=max){max=a;index=i;}}
    //cout<<max<<" "<<sum<<endl;
    if (max>sum/2) cout<<1;
    else {
        int i=0;
        while(max<=sum/2){
            if(i!=index) {max+=arr[i];i++;}
        }
        cout<<i+1;
    }
    
}

int32_t main(){
    fastio();
    int Test=1;
    //cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}