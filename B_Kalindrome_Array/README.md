# K. Kalindrome Array


### Problem:

An array [b1,b2,…,bm] is a palindrome, if bi=bm+1−i for each i from 1 to m. Empty array is also a palindrome.

An array is called kalindrome, if the following condition holds:

It's possible to select some integer x and delete some of the elements of the array equal to x, so that the remaining array (after gluing together the remaining parts) is a palindrome.

Note that you don't have to delete all elements equal to x, and you don't have to delete at least one element equal to x.

For example :

[1,2,1] is kalindrome because you can simply not delete a single element.
[3,1,2,3,1] is kalindrome because you can choose x=3 and delete both elements equal to 3, obtaining array [1,2,1], which is a palindrome.
[1,2,3] is not kalindrome.
You are given an array [a1,a2,…,an]. Determine if a is kalindrome or not.

### Input

The first line contains a single integer t (1≤t≤10<sup>4</sup>) — the number of test cases. The description of the test cases follows.

The first line of each test case contains a **single integer n** (1≤n≤2⋅10<sup>5</sup>) — the length of the array.

The second line of each test case contains **n integers a1,a2,…,an **(1≤ai≤n) — elements of the array.

It's guaranteed that the sum of n over all test cases won't exceed 2⋅10<sup>5</sup>.

### Output

For each test case, print YES if a is kalindrome and NO otherwise. You can print each letter in any case.

### Example

##### Input

>    4
>    1
>    1
>    2
>    1 2
>    3
>    1 2 3
>    5
>    1 4 4 1 4




##### Ouput

>    YES
>    YES
>    NO
>    YES



### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp

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
``` 