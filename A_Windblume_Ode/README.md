# A. Windblume Ode



### Problem:

A bow adorned with nameless flowers that bears the earnest hopes of an equally nameless person.

You have obtained the elegant bow known as the Windblume Ode. Inscribed in the weapon is an array of **n (n≥3) positive distinct integers** (i.e. different, no duplicates are allowed).

Find the largest subset (i.e. having the maximum number of elements) of this array such that its sum is a composite number. A positive integer x is called composite if there exists a positive integer y such that **1<y<x** and x is divisible by y.

If there are multiple subsets with this largest size with the composite sum, you can output any of them. It can be proven that under the constraints of the problem such a non-empty subset always exists.

### Input

Each test consists of multiple test cases. The first line contains the number of test cases t (1≤t≤100). Description of the test cases follows.

The first line of each test case contains an integer n (3≤n≤100) — the length of the array.

The second line of each test case contains n distinct integers a1,a2,…,an (1≤ai≤200) — the elements of the array.

### Output

Each test case should have two lines of output.

The first line should contain a single integer x: the size of the largest subset with composite sum. The next line should contain x space separated integers representing the indices of the subset of the initial array.

### Example

##### Input

>                    4
>                    3
>                    8 1 2
>                    4
>                    6 9 4 2
>                    9
>                    1 2 3 4 5 6 7 8 9
>                    3
>                    200 199 198




##### Ouput

>                   2
>                   2 1
>                   4
>                   2 1 4 3
>                   9
>                   6 9 1 2 3 4 5 7 8
>                   3
>                   1 2 3 








### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp


bool Prime(int n) {
  for (int i = 2; i < n; i++) {
    if (n % i == 0) return false;
  }
  return true;
}


int divide(int* T,int start,int end,int max,vector<int>& maxVector){

    if (end-start<0) return 0;

    divide(T,start+1,end,max,maxVector);
    divide(T,start,end-1,max,maxVector);
    divide(T,start+1,end-1,max,maxVector);

    int x=0;
    vector<int> v;

    rep(i,start,end){
        x+=T[i];
        v.push_back(T[i]);
    }
    if (x>max && !Prime(x)) {
        max=x;
        maxVector=v;}
    return 0;

}


void solve(){

    int n;cin>>n;
    int arr[n];
    int max=0;


    rep(i,0,n){
        cin>>arr[i];
    }
    vector<int> maxVector;
    divide(arr,0,n,max,maxVector);
    cout<<maxVector.size()<<endl;
    for (int i=0;i<maxVector.size();i++){
        if (i<maxVector.size()-1)cout<<maxVector[i]<<" ";
        else cout<<maxVector[i];
    }
    cout<<endl;
}

int32_t main(){

    int Test;
    cin>>Test;
    while(Test--) solve();
 
    return 0;
}

``` 