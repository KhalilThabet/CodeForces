#include <iostream>
#include <vector>
#include <algorithm>
#define Case(i) cout<<"Case #"<<i<<": ";

using namespace std;



int main() {
    ios::sync_with_stdio(false);
    int t;
    cin>>t;cin.ignore();
    
    for(int i=0;i<t;i++){
        vector<long int> s;
        int n;cin>>n;cin.ignore();
        for(int k=0;k<n;k++){
            int a;cin>>a;cin.ignore();
            s.push_back(a);}
        vector<long int> a=s;
        for(int k=0;k<n-1;k++) s.insert(s.end(),a.begin(),a.end());
        int sum=0;
        int count=0;
        for(int k=0;k<s.size();k++){
            
            for(int o=0;o<s.size();o++){
                a={s[k]};
                for (int j = o; j < s.size(); j++)
                {
                    if(s[j]>a[a.size()-1]) {
                        count++;
                        a.push_back(s[j]);
                    }
                }
                for(auto e:a){
                    cout<<e<<" ";
                }
                cout<<endl;
                if (count>sum) sum=count;
                count=0;
            }
            
            
            
        }
        
        cout<<endl;
        cout<<sum+1<<endl;

    }


    return 0;
}