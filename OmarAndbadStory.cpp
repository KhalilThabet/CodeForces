#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
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
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;

int found(vector<int> v,int e){
    if(find(v.begin(),v.end(),e)==v.end())
        return 0;
    return 1;
}

int verifying(vector<int>& v){
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if (!found(v,abs(v[j]-v[i]))){
                v.push_back(abs(v[j]-v[i]));
            }
        }
    }
    return v.size();
}

void solve(){
    vector<int> v;
    int n;cin>>n;cin.ignore();
    int b=0;
    for(;n--;) {
        int a;cin>>a;cin.ignore();
        if(a<0) b=1;;
        v.push_back(a);
    }
    if (b==0){
        int x;
        while(1) {
            x=verifying(v);
            int y=verifying(v);
            if (x==y ||x==100) break;
            }
    
        cout<<"yes\n"<<x<<endl;
        aff(v);
    }
    else cout<<"NO\n";

}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}