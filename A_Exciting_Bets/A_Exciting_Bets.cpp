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
    int a,b,op=0,k=2;
    cin>>a>>b;cin.ignore();
    if(a-b==0) cout<<"0 0"<<endl;
    else if(abs(a-b)==1){
        cout<<"1 0"<<endl;
    }
    else{
        while(1){
        if (a==0||b==0) break;
        else if(__gcd(a+1,b+1)>__gcd(a,b) && (k==2||k==1)){
            a+=1;
            b+=1;
            op+=1;
            k=1;
            
        }
        else if (__gcd(a+1,b+1)<=__gcd(a,b) && k==2) k=0;
        else if(a>0 && b>0 && k==0){
            a-=1;b-=1;
            op+=1;            
        }
        else break;
        }
        if (a!=0&&b!=0) cout<< __gcd(a,b)<< " "<< op<<endl;
        else if (a==0) cout<<b<<" "<< op<<endl;
        else cout<<a<<" "<<op<<endl;

    }
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}