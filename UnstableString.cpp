#include <iostream>
#include <vector>

using namespace std;
bool stable(string a){

    for(long int i=0;i<a.size();i++){
        if(a[i]=='?' && i>0){
            char b=a[i-1];
            for(long int k=i+1;k<a.size();k++){
                if (b!='?' && a[k]!='?'&& k==i+1) return 0;
                else if(a[k]!=b && a[k]!='?') {
                    i=k;break;}
                
                else if(a[k]!='?') return 0;
            }
        }
        if(a[i]!='?'&&a[i]==a[i+1]) return 0;
    }
    return 1;
}

int main() {
    ios::sync_with_stdio(false);
    long int t;
    string s="??0101?000??????????0??010???100?0101??01????????0?010?11??0??0011???0?0??0011??1101?1?0??01";
    cout<<s.size();
    // cin>>t;cin.ignore();
    // for(int i=0;i<t;i++){
    //     string s;cin>>s;cin.ignore();
    //     long int sum=0;
    //     for(long int k=0;k<s.size();k++){
    //         string a="";
    //         a+=s[k];
    //         for(long int j=k;j<s.size();j++){
    //             if(j!=k)a+=s[j];
    //             if(stable(a)) {
    //                 sum++;}
    //         }
            
    //     }
    //     cout<<sum<<endl;
    // }



    return 0;
}