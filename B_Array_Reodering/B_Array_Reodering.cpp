#include <iostream>
#include <algorithm>
#include <vector>
long long int gcd(long long int a, long long int b)
{
    if (a == 0) return b;
    if (b == 0) return a;
    if (a == b) return a;
    if (a > b)  return gcd(a-b, b);
    return gcd(a, b-a);
}
using namespace std;

void solve(){
    vector<int> v;
        int n;cin>>n;cin.ignore();
        int b=n;

        for(;b--;){
            int a;cin>>a;cin.ignore();
            v.push_back(a);
        }

        long int sum=0;
        for(long int j=0;j<n-1;j++){

            for(long int a=j+1;a<n;a++){

                if(gcd(v[j],2*v[a])>1||gcd(2*v[j],v[a])>1) {
                    sum++;
                }
            }

        }
        cout<<sum<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;cin.ignore();
    
    for(;t--;){
        solve();

    }


    return 0;
}