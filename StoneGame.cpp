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
    int n;cin>>n;cin.ignore();
    int arr[n];int x=n;
    int min=n;
    int max=0;
    int sum1=0;int sum2=0;
    for(;x--;) { 
        int a;cin>>a;cin.ignore();
        if(a<min) min=a;
        if(a>max) max=a;
        arr[n-x]=a;
        }
        int a=0;
        int b=0;
        for(int i=1;i<=n/2+1;i++){
            if(arr[i]==min || arr[i]==max) {
            sum1=i;
            a+=1;
            }
            
        }
        if (a==2)cout<<sum1<<endl;
        if(a!=2){
            for(int i=n;i>n/2;i--){
                if((arr[i]==min || arr[i]==max)) {
                    sum2=n-i+1;
                    b+=1;
                }
            }  
            if(b==2) cout<<sum2<<endl; 
        }
        if(a!=2 && b!=2){
            int i=1;
            int move=0;
            int a=0;
            while(i!=n/2){

                if(arr[i]!=min && arr[i]!=max){
                    move++;
                    i=n-i+1;
                    if(arr[i]!=min && arr[i]!=max){
                        move++;
                        i=n-i+1;
                        i++;}
                    else a++;
                }

                else a++;
                
                if (a==2) break;
            }
            cout<<move;

        
        }

        
        



}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}