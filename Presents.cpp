#include <iostream>
#include <vector>
using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    vector<int> v,similar(t);
    vector<int>::iterator it;
    for(int i=0;i<t;i++){
        int a;
        cin>>a;cin.ignore();
        v.push_back(a);
    }

    for(int k=1;k<t+1;k++){
        it=similar.begin();
        for(int i=1;i<v[k-1];i++,it++);
        
        *it=k;
    }

    for(int e:similar){
        cout<<e<<" ";
    }
    cout<<endl;




    return 0;
}