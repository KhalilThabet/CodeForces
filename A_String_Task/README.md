# A. String Task



### Problem:

Petya started to attend programming lessons. On the first lesson his task was to write a simple program. The program was supposed to do the following: in the given string, consisting if uppercase and lowercase Latin letters, it:

- deletes all the vowels,
- inserts a character "." before each consonant,
- replaces all uppercase consonants with corresponding lowercase ones.

Vowels are letters "A", "O", "Y", "E", "U", "I", and the rest are consonants. The program's input is exactly one string, it should return the output as a single string, resulting after the program's processing the initial string.

Help Petya cope with this easy task.

### Input

The first line represents input string of Petya's program. This string only consists of uppercase and lowercase Latin letters and its length is from 1 to 100, inclusive.

### Output

Print the resulting string. It is guaranteed that this string is not empty.

### Example

##### Input

>                   Codeforces
>                   tour
>                   aBAcAba







##### Ouput

>                   .c.d.f.r.c.s
>                   .t.r
>                   .b.c.b






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
    string s;cin>>s;
    string replacement="";
    rep(i,0,s.size()){
        
        if (isvowel(tolower(s[i]))) continue;
        replacement+=".";
        replacement+=tolower(s[i]);
    }
    cout<<replacement<<endl;
}

int32_t main(){
    fastio();
    int Test=1;
    while(Test--) solve();
    
    
    return 0;
}

``` 