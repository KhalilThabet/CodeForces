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
    string input;cin>>input;
    string s="";
    int indexNext;
    int rightIndex=input.find('a'),leftIndex=input.find('a');
    int a=1;
    if (rightIndex>=input.size()||rightIndex<0) a=INT32_MIN;
    
    for (int i=65;i<91;i++){
        indexNext=input.find(tolower((char)i));
        
        if (indexNext==rightIndex+1){
            rightIndex=indexNext;
            a++;
        }
        else if (indexNext==leftIndex-1){
            leftIndex=indexNext;
            a++;
        }
        if (leftIndex==0 && rightIndex==input.size()-1) break;
        if (i-64!=a) break;
        
    }
    cout<<(a==input.size()?"YES":"NO")<<endl;
    
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}