#include <bits/stdc++.h>

using namespace std;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while (t--){
    int n;
    cin>>n;
    vector<pair<int,int>> a;
    for (int i=0;i<n;i++){
        int tmp;
        cin>>tmp;
        a.push_back(make_pair(tmp,i));
    }
    sort(a.begin(),a.end(),[](pair<int,int> &a,pair<int,int>& b){return a.first<b.first;});
    cout<<a[n-1].second+1<<endl;
    }

}