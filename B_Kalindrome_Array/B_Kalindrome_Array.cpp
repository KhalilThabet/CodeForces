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
#define aff(v)                          for(auto e:v) cout<<e<<" "; cout<<endl;


bool palVerif(vector<int> vec) {
    for (int i = 0; i < sz(vec); ++i)
        if (vec[i] != vec[sz(vec) - 1 - i]) return 0;
    return 1;
}

void solve() {
    int n;cin >> n;
    vector<int> a(n), temp;
    for (int &x : a) cin >> x;
    bool v = 1;
    int p = 0, m = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != a[n - 1 - i]) {
            p = a[i], m = a[n - 1 - i];
            v = 0;
            break;
        }
    }
    if (v) return void(cout << "YES\n");
    for (int i = 0; i < n; i++)
        if (a[i] != p) temp.push_back(a[i]);
    if (palVerif(temp)) return void(cout << "YES\n");
    temp.clear();
    for (int i = 0; i < n; i++)
        if (a[i] != m) temp.push_back(a[i]);
    if (palVerif(temp)) return void(cout << "YES\n");
    temp.clear();
    cout << "NO\n";
}


int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}