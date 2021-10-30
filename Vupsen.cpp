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
    int arr[n];
    for (int i=0;i<n;i++) cin>>arr[i];
    if (n%2==0){
        for (int i=0;i<n;i+=2) cout<<arr[i+1]<<" "<<-arr[i]<<" ";
    }
    else{
        if (arr[1]+arr[2]){
            cout<<-(arr[1]+arr[2])<<" "<<arr[0]<<" "<<arr[0]<<" ";
        }
        else if (arr[0]+arr[1]){
            cout<<arr[2]<<" "<<arr[2]<<" "<<-(arr[1]+arr[0])<<" ";
        }
        else if (arr[0]+arr[2]){
            cout<<arr[1]<<" "<<-(arr[2]+arr[0])<<" "<<arr[1]<<" ";
        }
        for (int i=3;i<n;i+=2) cout<<arr[i+1]<<" "<<-arr[i]<<" ";
    }
    cout<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}