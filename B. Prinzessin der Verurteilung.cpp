#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
#define ll                             long long
#define pb                              push_back
#define ppb                             pop_back
#define pf                              push_front
#define ppf                             pop_front
#define all(x)                          (x).begin(),(x).end()
#define uniq(v)                         (v).erase(unique(all(v)),(V).end())
#define sz(x)                           (int)((x).size())
#define pii                             pair<int,int>
#define rep(i,a,b)                      for(int i=a;i<b;i++)
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;                   
#define Chars(arr)                      rep(i,0,26){arr[i]=(i+97);i++;}

int inside(string s,string a){
    if(s.find(a)<s.size()) return 1; else return 0;
}
string StringGeneratorLevel3(int* v,int& k,string strStart){
    string s=strStart;
    int length=0;

    for(int i=0;i<26;i++){
        if(i>=0) {s=strStart+(char)v[i];}
        for(int j=i+1;j<26;j++){
            s.pb((char)v[j]);
            if(length==k) return s;
            length++;
            s=strStart+(char)v[i];   
        }
    }
    return "-1";
}

string StringGeneratorLevel2(int* v,int& k){
    string s;
    int length=0;

    for(int i=0;i<26;i++){
        s=(char)v[i];
        for(int j=i+1;j<26;j++){
            s.pb((char)v[j]);
            if(length==k) return s;
            length++;
            s=(char)v[i];   
        }
    }
    k-=length;StringGeneratorLevel3(v,k,"a");
    return "-1";
}

string StringGeneratorLevel1(int* v,int& k){
    string s="";
    int length=0;

    for(int j=0;j<26;j++){
        s.pb((char)v[j]);
        if(length==k) return s;
        length++;
        s=""; 
    }  
    k-=length;StringGeneratorLevel2(v,k);
    return "-1";
}



void solve(){
    int arr[26];
    Chars(arr);
    int n;cin>>n;cin.ignore();
    string s;cin>>s;cin.ignore();
    int i=1;
    for(i=0;i<703;i++){
        if(!inside(s,StringGeneratorLevel1(arr,i))) {
            cout<<StringGeneratorLevel1(arr,i)<<endl;break;}
    }
}

int32_t main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    

    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}