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
    int n;cin>>n;cin.ignore();vector<int> v;
    for(int i=0;i<n;i++){
        int a;cin>>a;cin.ignore();
        v.pb(a);
    }
    if(v.size()>1){
        int i=0;
        while(i<n){
            if(v[i]*v[i+1]>=0){
                if (find(v.begin(),v.end(),v[i]-v[i+1])==v.end()){
                    v.pb(v[i]-v[i+1]);
                    n++;
                }
            }
            else{
                if (find(v.begin(),v.end(),v[i]+v[i+1])==v.end()||v[i]+v[i+1]==0){
                    v.pb(v[i]+v[i+1]);
                    n++;
                
                }
            }
            i++;
            if(v[i]==0) break;
            
        }
        //aff(v);
        int sum=0;
        for(auto e:v){
            sum+=e;
        }
        cout<<-sum<<endl;
    }
    else cout<<0;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}