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
                    int n,k;cin>>n>>k;cin.ignore();
                    int array[n];
                    rep(i,0,n){
                                        cin>>array[i];
                    }
                    rep(i,0,k){
                                        int query;cin>>query;
                                        int left=0;int right=n-1;
                                        while(left<=right){
                                                            int middle=(left+right)/2;
                                                            if (array[middle]==query){
                                                                                cout<<"YES\n";goto exit;
                                                            }
                                                            else if (array[middle]> query){
                                                                               right=middle-1;
                                                            }
                                                            else{
                                                                               left=middle+1;
                                                            }
                                        }
                                        cout<<"NO\n";
                                        exit:;

                    }

}

int32_t main(){
    fastio();
    int Test=1;
    while(Test--) solve();
    
    
    return 0;
}