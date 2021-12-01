# B. Array Reodering



### Problem:

You are given an array a consisting of n integers.

Let's call a pair of indices i, j good if 1≤i<j≤n and gcd(ai,2aj)>1 **(where gcd(x,y) is the greatest common divisor of x and y).**

***Find the maximum number of good index pairs*** if you can reorder the array a in an arbitrary way.

### Input

The first line contains a single integer t (1≤t≤1000) — the number of test cases.

The first line of the test case contains a single integer n (2≤n≤2000) — the number of elements in the array.

The second line of the test case contains n integers **a1,a2,…,an (1≤ai≤10<sup>5</sup>).**

It is guaranteed that the sum of n over all test cases does not exceed 2000.
### Output

For each test case, output a single integer — the maximum number of good index pairs if you can reorder the array a in an arbitrary way.



### Example

##### Input

>                    3
>                    4
>                    3 6 5 3
>                    2
>                    1 7
>                    5
>                    1 4 2 4 1






##### Ouput

>                   4
>                   0
>                   9










### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp
void solve(){
    vector<int> v;
        int n;cin>>n;cin.ignore();
        int b=n;

        for(;b--;){
            int a;cin>>a;cin.ignore();
            v.push_back(a);
        }

        long int sum=0;
        for(long int j=0;j<n-1;j++){

            for(long int a=j+1;a<n;a++){

                if(gcd(v[j],2*v[a])>1||gcd(2*v[j],v[a])>1) {
                    sum++;
                }
            }

        }
        cout<<sum<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int t;
    cin>>t;cin.ignore();
    
    for(;t--;){
        solve();

    }


    return 0;
}

``` 