#include <algorithm>
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <map>
using namespace std;
#define ll                             long long
#define pb                              push_back
#define ppb                             pop_back
#define pf                              push_front
#define ppf                             pop_front
#define all(x)                          (x).begin(),(x).end()
#define uniq(v)                         (v).erase(unique(all(v)),(V).end())
#define sz(x)                           (int)((x).size())
#define pii                             pair<int,int>
#define rep(i,a,b)                      for(int i=a;i<b;i++)
#define aff(v)                          for(auto e:v) cout<<e<<" "<<e<<endl; cout<<endl;


int finder(int * arr,int n,int a){
    for(int i=0;i<n;i++){
        if (a==arr[i]) return 1;
    }
    return 0;
}
int nice(int *arr,int n){
    vector<int> v;
    rep(i,0,n-1){
        rep(j,i+1,n){
            if(!finder(arr,n,abs(arr[j]-arr[i]))||find(v.begin(),v.end(),abs(arr[j]-arr[i]))==v.end()) {
                v.push_back(abs(arr[j]-arr[i]));
                return 0;}
        }
    }
    return 1;

}
void solve(){
    ll n;cin>>n;
    int arr[n];
    rep(i,0,n){
        int a;cin>>a;cin.ignore();arr[i]=a;
    }
    
    
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);cout.tie(NULL);
    int Test;
    cin>>Test;
    while(Test--) solve();
    return 0;
    
    return 0;
}