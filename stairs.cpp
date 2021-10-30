#include <iostream>

using namespace std;



/*
 * Complete the 'staircase' function below.
 *
 * The function accepts INTEGER n as parameter.
 */
void stream(int* arr,int l){
    
    for(int n=0;n<l;n++){

        cout<<(char)arr[n];

    }

    cout<<endl;
}
void staircase(int n) {
    
    int arr[n];int x=n;int y=n;
    
    for(;x--;) {

        arr[x]=32;

    }
    
    for(;y--;){

        cout<<y<<endl;
        arr[y]=35;
        stream(arr,n);    
        
    }
}

int main()
{9
    int n ;cin>>n;;

    staircase(n);

    return 0;
}