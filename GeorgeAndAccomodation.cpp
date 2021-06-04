#include <iostream>

#define Case(i) cout<<"Case #"<<i<<": ";

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    int x=0;
    for(int i=0;i<t;i++){
        int a,b;
        cin>>a>>b;cin.ignore();
        if (b-a>=2) x++;
    }
    cout<<x;
    return 0;


    return 0;
}