# A. Even But Not Even



### Problem:

Let's define a number ebne (even but not even) if and only if its sum of digits is divisible by 2 but the number itself is not divisible by 2. For example, **13**, **1227**, **185217** are ebne numbers, while **12**, **2**, **177013**, **265918** are not. If you're still unsure what ebne numbers are, you can look at the sample notes for more clarification.

You are given a non-negative integer s, consisting of n digits. You can delete some digits (they are not necessary consecutive/successive) to make the given number ebne. You cannot change the order of the digits, that is, after deleting the digits the remaining digits collapse. The resulting number shouldn't contain leading zeros. You can delete any number of digits between 0 (do not delete any digits at all) and n−1.

For example, if you are given ***s=222373204424185217171912*** then one of possible ways to make it ebne is: ***<s>2</s>22373<s>20</s>442<s>4</s>18521717191<s>2</s>*** → ***2237344218521717191***. The sum of digits of ***2237344218521717191*** is equal to 70 and is divisible by 2, but number itself is not divisible by 2: it means that the resulting number is ebne.

Find any resulting number that is ebne. If it's impossible to create an ebne number from the given number report about it.

### Input

The input consists of multiple test cases. The first line contains a **single integer t (1≤t≤1000)**  — the number of test cases. The description of the test cases follows.

The first line of each test case contains a **single integer n (1≤n≤3000)**  — the number of digits in the original number.

The second line of each test case contains a **non-negative integer number s**, consisting of n digits.

It is guaranteed that s does not contain leading zeros and the sum of n over all test cases does not exceed 3000.

### Output

For each test case given in the input print the answer in the following format:

- If it is impossible to create an ebne number, print "-1" (without quotes);

- Otherwise, print the resulting number after deleting some, possibly zero, but not all digits. This number should be ebne. If there are multiple answers, you can print any of them. Note that answers with leading zeros or empty strings are not accepted. It's not necessary to minimize or maximize the number of deleted digits.

### Example

##### Input

>                    4
>                    4
>                    1227
>                    1
>                    0
>                    6
>                    177013
>                    24
>                    222373204424185217171912






##### Ouput

>                    1227
>                    -1
>                    17703
>                    2237344218521717191




### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp


void solve(){
                    string s;
                    cin>>s;
                    int x=0;
                    for (auto e:s){
                                        if ((e-48)%2==0) x++;
                    }
                    if (x==0) {cout<<-1<<endl;goto z;}
                    else{
                                        if ((s[s.size()-1]-48)%2==0) cout<<0<<endl;
                                        else if ((s[0]-48)%2==0) cout<<1<<endl;
                                        else cout<<2<<endl;
                    }
                    z:;
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    return 0;
}

``` 