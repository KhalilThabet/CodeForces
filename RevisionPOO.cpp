#include <iostream>
using namespace std;
struct record{

    int a;
    short int bl;
    char c;
    public: 
        void disp() 
        {
            cout<<a<<" "<<bl<<" "<<c<<endl;
            }
};
int main(){
    record strin;
    record* ss;
    free(ss);
    strin.a=3;
    strin.c=65;
    strin.disp();

}