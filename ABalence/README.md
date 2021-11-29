# A. AB Balance



### Problem:

You are given a string s of length n consisting of characters a and/or b.

Let AB(s) be the number of occurrences of string ab in s as a substring. Analogically, BA(s) is the number of occurrences of ba in s as a substring.

In one step, you can choose any index i and replace si with character a or b.

What is the minimum number of steps you need to make to achieve AB(s)=BA(s)?

Reminder:

The number of occurrences of string d in s as substring is the number of indices i (1≤i≤|s|−|d|+1) such that substring sisi+1…si+|d|−1 is equal to d. For example, AB(aabbbabaa)=2 since there are two indices i: i=2 where aabbbabaa and i=6 where aabbbabaa.

### Input

Each test contains multiple test cases. The first line contains the number of test cases t (1≤t≤1000). Description of the test cases follows.

The first and only line of each test case contains a single string s (1≤|s|≤100, where |s| is the length of the string s), consisting only of characters a and/or b.

### Output

For each test case, print the resulting string s with AB(s)=BA(s) you'll get making the minimum number of steps.

If there are multiple answers, print any of them.



### Example

##### Input

>                    4
>                    b
>                    aabbbabaa
>                    abbb
>                    abbaab





##### Ouput

>                    b
>                    aabbbabaa
>                    bbbb
>                    abbaaa









### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp

int ab(string s){
    int a=0;
    rep(i,0,s.size()-1){
        if (s[i]=='a' && s[i+1]=='b') a++;
    }
    return a;
}

int ba(string s){
    int a=0;
    rep(i,0,s.size()-1){
        if (s[i]=='b' && s[i+1]=='a') a++;
    }
    return a;
}

void solve(){
    string s; cin>>s;
    
    s[s.size()-1]=s[0];
    cout<<s<<endl;

}

int32_t main(){

    int Test;
    cin>>Test;
    while(Test--) solve();
    
    return 0;
}

``` 