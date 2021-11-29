# A. Theatre Square



### Problem:

Theatre Square in the capital city of Berland has a rectangular shape with the size **n** × **m** meters. On the occasion of the city's anniversary, a decision was taken to pave the Square with square granite flagstones. Each flagstone is of the size **a × a.**

What is the least number of flagstones needed to pave the Square? It's allowed to cover the surface larger than the Theatre Square, but the Square has to be covered. It's not allowed to break the flagstones. The sides of flagstones should be parallel to the sides of the Square.

### Input

The input contains three positive integer numbers in the first line: ***n,  m and a (1 ≤  n, m, a ≤ 10<sup>9</sup>).***

### Output

Write the needed number of flagstones.

### Example

##### Input

>                   6 6 4








##### Ouput

>                   4







### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp


string vowel="aeouyi";

bool isvowel(char v) {
    int i=0;
    for (auto e:vowel) if (e==v) i++;
    if (i) return true;
    return false;
}

void solve(){

    int n,m,a;cin>>n>>m>>a;cin.ignore();
    int surface=(m/a)*(n/a);
    int resteHigh=0,resteLow=0;

    if (n%a) resteHigh=(m/a);
    if (m%a) resteLow= n/a;

    cout<<surface+resteHigh+resteLow+(((m%a!=0 && n%a!=0 )&& (n*m)%(a*a)!=0)?1:0)<<endl;
}

int32_t main(){
    int Test=1;
    while(Test--) solve();

    return 0;
}

``` 