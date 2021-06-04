#include <iostream>
#include <vector>
#include <cmath>

#define Case(i) cout<<"Case #"<<i<<": ";

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    long int mod=1e9+7;
    int k=1;
    for(;t--;)k*=2;
    int a=0&k;
    cout<<a;
    for(;t--;){
        cout<<a;
        // int n,k;cin>>n>>k;cin.ignore();
        // long long ans=1;
        // for(;k--;){
        //     ans*=n;
        //     ans%=mod;}
        // cout<<ans<<endl;

        
        
        
    }


    return 0;
}