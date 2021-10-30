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
    int x1,x2,x3,y1,y2,y3;
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    int x=0;
    if (x1==x2 ){

        if (x3==x1 && ((y3>y1 && y3<y2)||(y3<y1 && y3>y2))){
            x+=1;
            x+=abs(y2-y1)+1;
        }
        else x+=abs(y2-y1);
    }
    else if (y1==y2){
        if(y3==y1 && ((x3>x1 && x3<x2)||(x3<x1 && x3>x2))){
            x+=1;
            x+=abs(x2-x1)+1;
        }
        else x+=abs(x2-x1);
    }
    else{

            x+=abs(x2-x1);
            x+=abs(y2-y1);
        
    }
    cout<<x<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}