# B. Make It Divisible By 25
//Codeforces Global Round 14

### Problem:

Phoenix is playing with a new puzzle, which consists of n identical puzzle pieces. Each puzzle piece is a right isosceles triangle as shown below.

<img src="https://espresso.codeforces.com/16604e63f083af79e8cd890c36ce29e7caaafdbe.png"
     alt="A puzzle piece"
     style="float: left; 
     margin-left:50%;margin-right: 50%;" />

The goal of the puzzle is to create a square using the n pieces. He is allowed to rotate and move the pieces around, but none of them can overlap and all n pieces must be used (of course, the square shouldn't contain any holes as well). Can he do it?



### Input


The input consists of multiple test cases. The first line contains an integer t (1≤t≤104) — the number of test cases.

The first line of each test case contains an integer n (1≤n≤109) — the number of puzzle pieces.

### Output

For each test case, if Phoenix can create a square with the n puzzle pieces, print *YES*. Otherwise, print *NO*.

### Example

##### Input

>    3
>    2
>    4
>    6






##### Ouput

>    YES
>    YES
>    NO




### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp

void solve(){
        double n;
        cin>>n;
        double b=sqrt(n/4);
        double a=sqrt(n/2);
        if (b-(int)b==0||a-(int)a==0) cout<<"YES\n";
        else cout<<"NO\n";
}



``` 