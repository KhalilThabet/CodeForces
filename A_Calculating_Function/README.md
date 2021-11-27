# A. Calculating Function


### Problem:

For a positive integer n let's define a function f:

f(n) =  - 1 + 2 - 3 + .. + ( - 1)<sup>n</sup>n

Your task is to calculate f(n) for a given integer n.

### Input

The single line contains the positive integer n (1 ≤ n ≤ 10<sup>15</sup>).

### Output

Print f(n) in a single line.

### Example

##### Input

> 4
5


##### Ouput

> 2
-3

### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp

void solve(){
    int n;
    cin>>n;
    int a=round(n/2);
    int b=-round(n/2)-1;
    string sa=to_string(a);
    string sb=to_string(b);
    if(n%2==1){
        cout<<b;
    }
    else cout<<a;
}

int32_t main(){
    fastio();
    int Test=1;
    // cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}

``` 