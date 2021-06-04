#include <iostream>
#include <string>
using namespace std;
void change(string& s,int n){
    string a=s;
    string::iterator it=s.begin();
    for(int i=0;i<n;it++,i++){
        if(a[i]=='1'){
            if(i>0 && i<n-1){
                    if (a[i+2]!='1') {
                        *next(it)='1';  
                    }
                    if (a[i-2]!='1') {
                        *prev(it)='1';
                    }
            }
            else if (i==0){
                if(a[2]!='1')
                *next(it)='1';
            }
            else if ( i==n-1){
                if (a[n-3]!='1')*prev(it)='1';
            }
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    int t;cin>>t;cin.ignore();
    for(int i=0;i<t;i++){
        int n;int m;
        cin>>n>>m;cin.ignore();
        string s,a;
        getline(cin,s);
        for(int k=0;k<m;k++) {
            a=s;
            change(s,n);
            if(a==s) break;
        }
        cout<<s<<'\n';
        
    }
}