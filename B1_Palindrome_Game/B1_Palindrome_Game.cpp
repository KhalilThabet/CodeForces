#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s){
    int start = 0;
    int end = s.size()-1;
    while(start<=end){
        if (s[start]!=s[end])break;
        start++;
        end--;
    }
    return start>end;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 0;
        for (int i=0;i<s.size();i++){
            if (s[i]=='0')count++;
        }
        if (count%2==1 && count >1){
            cout<<"ALICE\n";
        }
        else cout<<"BOB"<<endl;

    }
}