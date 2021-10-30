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
bool pal(string s){
    string a=s;
    reverse(a.begin(),a.end());
    if(a==s) return 1;
    return 0;
}

void solve(){
    int n;cin>>n;cin.ignore();
    string s;getline(cin,s);
    int dolBob=0;
    int dolAlice=0;
    string one="";
    for(int i=0;i<n;i++) one+="1";
    int turn=0;
    int rev=0;
    while(s!=one){
        if(pal(s)||rev==1) {
            for(string::iterator it=s.begin();it!=s.end();it++){
                if(*it=='0') {
                    *it='1';break;
                    }
            }
            
            if(turn==0) dolAlice++;
            else dolBob++;
            turn=abs(turn-1);
            rev=0;
        }
        else{
            rev=1;
            reverse(s.begin(),s.end());
            turn=abs(turn-1);
        }
        cout<<s<<endl;
    }
    if (turn==0) cout<<"BOB\n";
    else cout<<"ALICE\n";
    if(dolAlice>dolBob) cout<<"BOB\n";
    else if(dolBob>dolAlice) cout<<"ALICE\n";
    else cout<<"DRAW\n";

}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}