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
// bool testt(double k,int a,int b,int n) {
//     double x=k*n-a-b;
//     if (x/(n-2)==k) cout<<a<<" "<<b<<endl;
//     return x/(n-2)==k;
// }
// 1*5 4*5 7*5 3*5 5*5 || k=20  =  4
// 8 8 8 8 = 32/4 = (8-16/4)* 4/2 == 8
void solve(){
    int n;double k=0;
    cin>>n;
    int arr[n];
    map<int,int> counter;
    rep(i,0,n) {
        cin>>arr[i];k+=arr[i];
        arr[i]*=n;
    }
    k*=2;
    int total=0;
    rep(i,0,n){
        total+=counter[k-arr[i]];
        counter[arr[i]]++;
    }
    cout<<total<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}