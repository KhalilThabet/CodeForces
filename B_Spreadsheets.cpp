// In the popular spreadsheets systems (for example, in Excel) the following numeration of columns is used. The first column has number A, the second — number B, etc. till column 26 that is marked by Z. Then there are two-letter numbers: column 27 has number AA, 28 — AB, column 52 is marked by AZ. After ZZ there follow three-letter numbers, etc.
// The rows are marked by integer numbers starting with 1. The cell name is the concatenation of the column and the row numbers. For example, BC23 is the name for the cell that is in column 55, row 23.
// Sometimes another numeration system is used: RXCY, where X and Y are integer numbers, showing the column and the row numbers respectfully. For instance, R23C55 is the cell from the previous example.
// Your task is to write a program that reads the given sequence of cell coordinates and produce each item written according to the rules of another numeration system.

// Input
// The first line of the input contains integer number n (1 ≤ n ≤ 105), the number of coordinates in the test. Then there follow n lines, each of them contains coordinates. All the coordinates are correct, there are no cells with the column and/or the row numbers larger than 106 .

// Output
// Write n lines, each line should contain a cell coordinates in the other numeration system.

#include <algorithm>
#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <map>
using namespace std;


#define int                             long long
#define pb                              push_back
#define ppb                           pop_back
#define pf                               push_front
#define ppf                            pop_front
#define all(x)                       (x).begin(),(x).end()
#define uniq(v)                  (v).erase(unique(all(v)),(V).end())
#define sz(x)                       (int)((x).size())
#define pii                               pair<int,int>
#define rep(i,a,b)               for(int i=a;i<b;i++)
#define fastio()                   ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define aff(v)                       for(auto e:v) cout<<e<<" "; cout<<endl;

void g(int t){if(t){g((t-1)/26);cout<<(char)(65+(t-1)%26);}}

void solve(){
                    string input;cin>>input;input+="z";
                    string s="";vector<string> v;
                    int x=0;
                    for (auto characters:input) {
                                        if (x==0 && characters<58){
                                                            v.pb(s);
                                                            s=characters;
                                                            x=1;
                                                            continue;
                                        }
                                        if (x==1 && characters>64){
                                                            v.pb(s);
                                                            s=characters;
                                                            x=0;
                                                            continue;
                                        }
                                        s+=characters;
                    }
                    if (v.size()==4){
                                        int column=stoi(v[3]);
                                        g(column);
                                        cout<<v[1]<<endl;
                    }
                    else{
                                        string temp=v[0];
                                        int column=0;
                                        int k=temp.size()-1;
                                        for(int i=k;i!=-1;i--){
                                                            column+=(temp[i]-'A'+1)*pow(26,k-i);
                                        }
                                        cout<<"R"<<v[1]<<"C"<<column<<endl;
                    }
                    
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}