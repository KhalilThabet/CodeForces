#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for (int i=0;i<n;i++){
        cin>>a[i];
    }
    int ans  =0;
    int length = 0;
    for (int i=0;i<n;i++){
        int j1 = i;
        while (j1<n-1 && a[j1]>=a[j1+1]){
            j1++;
        }
        int j2 = i;
        while (j2>0 && a[j2]>=a[j2-1]){
            j2--;
        }
        ans = max(j1-j2+1,ans);
    }
    cout<<ans<<endl;
}