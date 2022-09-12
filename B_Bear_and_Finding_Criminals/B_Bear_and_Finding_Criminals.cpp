#include <iostream>

using namespace std;


int main(){



    int n,a;
    cin>>n>>a;
    int t[n];
    for (int i=0;i<n;i++) cin>>t[i];
    int start = a-1;
    int end = a-1;
    int count = 0;
    while (start>=0 || end <n){
        if (t[start]==1 && start == end ) count++;
        if (start>=0) start--;
        if (end<n) end++;
        if (start==-1 && end <n && t[end]==1) count++;
        if (end==n && start>=0 && t[start]==1) count++;
        if (start>=0 && end <n && t[start]+t[end]==2 ) count+=2;

    }
    cout<<count<<endl;

}