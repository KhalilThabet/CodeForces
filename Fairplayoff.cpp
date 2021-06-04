#include <iostream>
#include <vector>
#define Case(i) cout<<"Case #"<<i<<": ";

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    
    for(int i=0;i<t;i++){
        vector<int> c;
        int s;
        int p=4;
        for(;p--;){
        cin>>s;cin.ignore();
        c.push_back(s);}
        vector<int> top;
        int o=0;
        for(int k=0;k<c.size();k++){
            int a=c[k];
            for(int j=0;j<c.size();j++){
                if(a>c[j]) o++;
            }
            if(o>=2) top.push_back(c[k]);
            o=0;
        }
        int finalsone,finalstwo;
        if(c[0]>c[1]) finalsone=c[0];
        else finalsone= c[1]; 
        if(c[2]>c[3]) finalstwo=c[2];
        else finalstwo= c[3]; 
        int j=0;
        for(auto e:top){
            if (finalsone==e) j++;
            if(finalstwo==e) j++;
        }
        if (j==2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }


    return 0;
}