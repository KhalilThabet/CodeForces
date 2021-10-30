#include <iostream>
#include <vector>

using namespace std;
int main(){
    int t;cin>>t;
    int n;cin>>n;
    vector<vector<int>> Stack(n);
    for (int i=1;i<n+1;i++) {
        int L,R;cin>>L>>R;
        for (int j=L-1;j<R;j++){
            Stack[j].push_back(i);
        } 
    
    }

    

    for (int i=0;i<n;i++) {
        cout<<"[";
        for (int j=0;j<Stack[i].size()-1;j++){
            cout<<Stack[i][j]<<",";
        } 
        cout<<Stack[i][j]<<" ],"<<endl;
    }
}
