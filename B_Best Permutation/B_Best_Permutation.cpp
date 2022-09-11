#include <iostream>

using namespace std;

int main(){
    int t;
    cin>>t;
    for (int i=0;i<t;i++){
        int n;cin>>n;
        if (n%2){
            cout<<1<<" ";
            for (int i=n-3;i>0;i--){
                cout<<i+1<<" ";
            }
        }
        else{
            for (int i=n-3;i>=0;i--){
                cout<<i+1<<" ";
            }
        }
        cout<<n-1<<" "<<n<<endl;
    }
}