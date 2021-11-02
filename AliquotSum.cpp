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
    int n;cin>>n;int sum=1;
    int a;
    rep(i,0,n){
        cin>>a;
        for(int j=2;j*j<a;j++){
            if (a%j==0) {
                sum+=j;
                if (j*j!=a) sum+=a/j;
            }
            else if (sum>a) break;
        }
        cout<<(sum>a?"abundant":(sum<a?"deficient":"perfect"))<<endl;
        sum=1;

    }

}
int pn(int p) {
        return (p << 1);
    }
int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    int n;
    while(Test--) {
        cin>>n;
        cout<<pn(n)<<endl;}
    
    
    return 0;
}