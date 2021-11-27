# A. Binary Search


### Problem:

Implement a binary search algorithm.

### Input

The first line of the input contains integers n and k (1≤n, k≤105), the length of the array and the number of queries. The second line contains n elements of the array, sorted in non-decreasing order. The third line contains k queries. All array elements and queries are integers, each of which does not exceed 109 in absolute value.

### Output

For each of the k queries print YES in a separate line if this number occurs in the array, and NO otherwise.

### Example

##### Input

>10 10
>1 61 126 217 2876 6127 39162 98126 712687 1000000000
>100 6127 1 61 200 -10000 1 217 10000 1000000000


##### Ouput

>NO
>YES
>YES
>YES
>NO
>NO
>YES
>YES
NO
YES

### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp

void solve(){
                    int n,k;cin>>n>>k;cin.ignore();
                    int array[n];
                    rep(i,0,n){
                                        cin>>array[i];
                    }
                    rep(i,0,k){
                                        int query;cin>>query;
                                        int left=0;int right=n-1;
                                        while(left<=right){
                                                            int middle=(left+right)/2;
                                                            if (array[middle]==query){
                                                                                cout<<"YES\n";goto exit;
                                                            }
                                                            else if (array[middle]> query){
                                                                               right=middle-1;
                                                            }
                                                            else{
                                                                               left=middle+1;
                                                            }
                                        }
                                        cout<<"NO\n";
                                        exit:;

                    }

}

int32_t main(){
    fastio();
    int Test=1;
    while(Test--) solve();
    
    
    return 0;
}

``` 