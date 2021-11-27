# A. Exciting Bets


### Problem:

Welcome to Rockport City!

It is time for your first ever race in the game against Ronnie. To make the race interesting, you have bet a dollars and Ronnie has bet b dollars. But the fans seem to be disappointed. The excitement of the fans is given by gcd(a,b), where gcd(x,y) denotes the greatest common divisor (GCD) of integers x and y. To make the race more exciting, you can perform two types of operations:

**Increase both a and b by 1.**
**Decrease both a and b by 1**.This operation can only be performed if both a and b are greater than 0.
In one move, you can perform any one of these operations. You can perform arbitrary (possibly zero) number of moves. ***Determine the maximum excitement*** the fans can get and the minimum number of moves required to achieve it.

>Note that gcd(x,0)=x for any x≥0.

### Input

The first line of input contains a single integer t (1≤t≤5⋅10<sup>3</sup>) — the number of test cases.

The first and the only line of each test case contains two integers a and b (0≤a,b≤10<sup>18</sup>).

### Output

For each test case, print a single line containing two integers.

If the fans can get infinite excitement, **print 0 0**.

Otherwise, the first integer must be the maximum excitement the fans can get, and the second integer must be the minimum number of moves required to achieve that excitement.

### Example

##### Input

>                    4
>                    8 5
>                    1 2
>                    4 4
>                    3 9





##### Ouput

>                    3 1
>                    1 0
>                    0 0
>                    6 3




### Code

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
```cpp


void solve(){
    int a,b,op=0,k=2;
    cin>>a>>b;cin.ignore();
    if(a-b==0) cout<<"0 0"<<endl;
    else if(abs(a-b)==1){
        cout<<"1 0"<<endl;
    }
    else{
        while(1){
        if (a==0||b==0) break;
        else if(__gcd(a+1,b+1)>__gcd(a,b) && (k==2||k==1)){
            a+=1;
            b+=1;
            op+=1;
            k=1;
            
        }
        else if (__gcd(a+1,b+1)<=__gcd(a,b) && k==2) k=0;
        else if(a>0 && b>0 && k==0){
            a-=1;b-=1;
            op+=1;            
        }
        else break;
        }
        if (a!=0&&b!=0) cout<< __gcd(a,b)<< " "<< op<<endl;
        else if (a==0) cout<<b<<" "<< op<<endl;
        else cout<<a<<" "<<op<<endl;

    }
}

int32_t main(){
    fastio();
    int Test;
    cin>>Test;
    while(Test--) solve();
    
    
    return 0;
}  

``` 