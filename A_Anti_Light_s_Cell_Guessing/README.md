# A. A.M Deviation

### Problem:

You are playing a game on a n×m grid, in which the computer has selected some cell (x,y) of the grid, and you have to determine which one.

To do so, you will **choose some k and some k cells** **(x1,y1),(x2,y2),…,(xk,yk)**, and give them to the computer. In response, you will get k numbers b1,b2,…bk, where ***bi is the manhattan distance from (xi,yi)*** to the hidden cell (x,y) (so you know which distance corresponds to which of k input cells).

After receiving these b1,b2,…,bk, you have to be able to ***determine the hidden cell***. What is the smallest k for which is it possible to always guess the hidden cell correctly, no matter what cell computer chooses?

>As a reminder, the manhattan distance between cells (a1,b1) and (a2,b2) is equal to |a1−a2|+|b1−b2|.

### Input

The first line of the input contains a single **integer t (1≤t≤104)** — the number of test cases. The description of test cases follows.

The single line of each test case contains **two integers n and m (1≤n,m≤109)** — the *number of rows* and the *number of columns* in the grid.

### Output

For each test case **print** a single integer — **the minimum k** for that test case.

### Example

##### Input

>                    2
>                    2 3
>                    3 1

##### Ouput

>                    2
>                    1
### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp

void solve(){
                    int n, m;
                    cin >> n >> m;
                    if (n == 1 && m == 1) return void(cout << 0 << '\n');
                    cout << min(2LL, min(n, m)) << '\n';
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    return 0;
}``` 