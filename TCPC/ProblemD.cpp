#include <iostream>
#include <vector>
#include <algorithm>
#include <map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
//const ll eps = 1e-9;
typedef vector<int>vi;
typedef vector<ll>vl;
#define all(v) v.begin(), v.end()
#define rall(v) v.rbegin(), v.rend()
#define read(v,n) for(ll i=0;i<n;i++)cin>>v[i];


void solve()
{
    vector<double> a(3), b(7);
    for (int i = 0; i < 3; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 7; i++)
    {
        cin >> b[i];
    }
    multimap<string, vi> m;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            double res = a[i] / b[j];
            
            string s = to_string(res);
            string ch = s.substr(0,4);
            if(s[4]-'0' >=5) ch[3]++;
            m.insert(pair<string,vector<int>>(ch,vector<int>{i+1,j+1}));

        }
    }
    map<string  , vector<vector<int>> > mp ;

    for(multimap<string,vi>::iterator it=m.begin();it!=m.end();it++)
    {
        vi v(2);
        v[0] = it->second[0];
        v[1] = it->second[1];
        mp[it->first].push_back(v);
    }
    for(auto xx:mp) sort(all(xx.second)) ;
    for(auto x:mp) 
    {
        for(auto y:x.second)
        {
            cout << x.first << " " << y[0] <<" " << y[1] << endl; 
        }

    }
    

    

}



int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int tc = 1;
 
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        cout << "Case " << t << ": "<<endl;
        solve();
    }
    return 0;
}