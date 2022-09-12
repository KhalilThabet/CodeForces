#include <bits/stdc++.h>

using namespace std;

int main(){
    int t=3;
    int arr[3]={0,0,0};
    while (t--){
        string s;
        cin>>s;
        if (s[1]=='>'){
            arr[s[0]-65]++;
        }
        else{
            arr[s[2]-65]++;
        }
    }
    if (arr[1]==arr[2] || arr[2]==arr[0] || arr[0]==arr[1]){cout<<"Impossible"<<endl;return 0;}
    for (int i=0;i<3;i++){
        if (arr[i]==0){
            cout<<(char)(i+'A');
        }
    }
    for (int i=0;i<3;i++){
        if (arr[i]==1){
            cout<<(char)(i+'A');
        }
    }
    for (int i=0;i<3;i++){
        if (arr[i]==2){
            cout<<(char)(i+'A');
        }
    }
    cout<<endl;
    
}