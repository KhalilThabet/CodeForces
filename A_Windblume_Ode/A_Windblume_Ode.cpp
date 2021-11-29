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


int divide(int* T,int start,int end,int max,vector<int>& maxVector){

    if (end-start<0) return 0;
    divide(T,start+1,end,max,maxVector);
    divide(T,start,end-1,max,maxVector);
    divide(T,start+1,end-1,max,maxVector);
    int x=0;
    vector<int> v;
    rep(i,start,end){
        x+=T[i];
        v.push_back(T[i]);
    }
    if (x>max && !Prime(x)) {
        max=x;
        maxVector=v;}
    return 0;

}


void solve(){
    int n;cin>>n;
    int arr[n];
    rep(i,0,n){
        cin>>arr[i];
    }
    int max=0;
    vector<int> maxVector;
    divide(arr,0,n,max,maxVector);
    cout<<maxVector.size()<<endl;
    for (int i=0;i<maxVector.size();i++){
        if (i<maxVector.size()-1)cout<<maxVector[i]<<" ";
        else cout<<maxVector[i];
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