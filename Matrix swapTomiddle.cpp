#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool lucky(int x){
    int a=0;
    if (x==4 || x==7) return 1;
    else if (x<10) return 0;
    for(char e:to_string(x)){
        cout<<e<<" ";
        if ((int)e-48==4 ||(int)e-48==7 ){
            a+=1;
        }
    }
    if (a==to_string(x).size()||lucky(a)) return 1;
    return 0;

}
int main(){
    // unsigned long int n;
    // cin>>n;
    // unsigned long long x=0;
    // string s=to_string(n);
    // for(char e:s){
    //     if ((int)e-48==4 ||(int)e-48==7 ){
    //         x+=1;
    //     }
    // }
    cout<<lucky(477474747474);
    


}