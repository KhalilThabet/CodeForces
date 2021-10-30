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
    int n;
    cin>>n;cin.ignore();
    for(;n--;){
    string s;
    getline(cin,s);cin.ignore();
    int i,a=0,b=0,k;
    for(i=0;i<s.size();i++){
        char a=i+97;
        if (find(s.begin(),s.end(),a)==s.end()){
            break;
        }
        if(s[i]=='a') k=i;
    }
    if(i==s.size()) {
        if(s.size()==1) cout<<"YES\n";
        else{
            while(a+b<s.size()){
                if(abs(s[k+a+1]-s[k-b])==1 ||abs(s[k+a+1]-s[k+a])==1) a++;
                else if (abs(s[k-b-1]-s[k+a])==1 ||abs(s[k-b-1]-s[k-b])==1) b++;
                else break;
            }
        if(a+b==s.size()-1) cout<<"YES\n";
        else cout<<"NO"<<endl;
        }
        
    }
    else cout<<"NO"<<endl;
    }
}

int32_t main(){
    fastio();
    int Test=1;
    //cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}