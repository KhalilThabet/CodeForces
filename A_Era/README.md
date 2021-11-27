# A. Era


### Problem:

Shohag has an integer sequence a1,a2,…,an. He can perform the following operation any number of times (possibly, zero):

Select any **positive integer k** (it can be different in different operations).
Choose any position in the sequence (possibly the beginning or end of the sequence, or in between any two elements) and insert k into the sequence at this position.
This way, the sequence a changes, and the next operation is performed on this changed sequence.
For example, if **a=[3,3,4]** and he selects **k=2**, then after the operation he can obtain one of the sequences **[2–,3,3,4], [3,2–,3,4], [3,3,2–,4], or [3,3,4,2–]**.

Shohag wants this sequence to satisfy the following condition: for each 1≤i≤|a|, ai≤i. Here, |a| denotes the size of a.

Help him to find the minimum number of operations that he has to perform to achieve this goal. We can show that under the constraints of the problem it's always possible to achieve this goal in a finite number of operations.

### Input

The first line contains a single integer t (1≤t≤200)  — the number of test cases.

The first line of each test case contains a **single integer n (1≤n≤100)** — the ***initial length of the sequence***.

The second line of each test case contains **n integers a1,a2,…,an**(1≤ai≤10<sup>9</sup>) — the elements of the sequence.

### Output

For each test case, print a single integer  — **the minimum number of operations** needed to perform to achieve the goal mentioned in the statement.

### Example

##### Input

>                    4
>                    3
>                    1 3 4
>                    5
>                    1 2 5 7 4
>                    1
>                    1
>                    3
>                    69 6969 696969




##### Ouput

>                    1
>                    3
>                    0
>                    696966



### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp


void solve(){
    int n;cin>>n;
    vector<int> arr(n,0);
    int counter=0;
    
    rep(i,0,n){
        cin>>arr[i];
    }
    int i=0;
    int indexChange=0;
    while(i<arr.size()){
        int x=arr[i]-i-indexChange-1;
        if (x>0){
            counter+=x;
            indexChange+=x;
        }
        i++;
    }
    cout<<counter<<endl;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}

``` 