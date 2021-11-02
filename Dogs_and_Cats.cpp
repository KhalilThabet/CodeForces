#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;
#define int                             long long
#define pb                              push_back
#define ppb                             pop_back
#define pf                              push_front
#define ppf                             pop_front
#define all(x)                          (x).begin(),(x).end()
#define uniq(v)                         (v).erase(unique(all(v)),(V).end())
#define sz(x)                           (int)((x).size())
#define pii                             pair<int,int>
#define rep(i,a,b)                      for(int i=a;i<b;i++)
#define fastio()ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define aff(cas,res) cout<<"Case #"<<cas<<": "<<res<<endl;

bool solve(){
    int N,D,C,M;
    cin>>N>>D>>C>>M;

    string s;cin>>s;cin.ignore();

    if (find(s.begin(),s.end(),'D')==s.end()){
        return true;
    }
    string temp="";
    int dd=0,totalDD=count(s.begin(), s.end(), 'D');
    // if (count(s.begin(), s.end(), 'D')>D||count(s.begin(), s.end(), 'C')>D*M+C) return false;
    rep(i,0,N){
        if (i<N-1 && s[i]==s[i+1]){
            temp+=s[i];
        }
        else {
            temp+=s[i];
            if (temp[0]=='D') {
                dd+=temp.size();
                D-=temp.size();
                if (dd==totalDD && D>=0) return true; 
                C+=temp.size()*M;
                if (D<0) return false;
            }
            else {
                C-=temp.size();
                if (C<0) return false;
            }
            temp="";
        }
    }
    return true;
}
int total=1;
int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) {
        if (solve()) {
            aff(total++,"YES");
        }
            
        else{
            aff(total++,"NO");
        }
    }
    
    
    return 0;
}