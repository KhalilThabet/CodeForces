#include <iostream>
#include <vector>
#define Case(i) cout<<"Case #"<<i<<": ";

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    vector<string> v;
    for(int i=0;i<t;i++){
        string s;
        cin>>s;cin.ignore();
        v.push_back(s);
    }
    char a=v[0][0];
    int sumGroups=0;
    for(auto e:v){
        if(e[0]!=a){
            sumGroups++;
            a=e[0];
        }
    }
    cout<<sumGroups+1;


    return 0;
}