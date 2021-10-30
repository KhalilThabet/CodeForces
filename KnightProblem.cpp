#include <iostream>
#include <cmath>
#include <vector>
#define Case(i,x) cout<<"Case #"<<i<<": "<<x<<endl;

using namespace std;
int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    for(int i=0;i<t;i++){
        unsigned long long e;cin>>e;
        int x=0;
        if(e>1){
            for(unsigned long int k=0;k<sqrt(e)-1;k++){
                if((double)sqrt(e-k*k)==(long int)sqrt(e-k*k)) x++;
                    
            }
        }
        else x++;
        Case(i+1,x);


    }


    return 0;
}