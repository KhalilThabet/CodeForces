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
    char c ;
    string s;
    cin>>c>>s;
    int sz = 0;
    int n = s.size();
    for(int i=0;i<n;i++)
    {
        if(s[i] == c)
        {
            int cnt = 1;
            for(int j=i+1;j<n;j++)
            {
                if (s[j]=='a' && s[j-1]=='z') cnt++;
                else if(s[j] != s[j-1] +1) {
                    break;
                }
                else cnt++;
            }
            sz = max(sz , cnt);
        }
    }
    cout << sz << endl;
}
 
int32_t main(){
    fastio();
    int c ;
    cin>>c;
    while(c--) solve();
    
    
    return 0;
}
