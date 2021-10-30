#include <iostream>

using namespace std;

#define rep(i,a,b)                      for(int i=a;i<b;i++)
#define affiche(array,a,b)              rep(i,a,b) cout<<array[i]<<" "; cout<<endl;



void merge(int arr[],int const left , int const middle, int const right){
    int LengthSubArrayOne=middle+1-left;
    int LengthSubArrayTwo=right-middle  ;
    
    int* LeftArray=new int[LengthSubArrayOne];
    int* RightArray=new int[LengthSubArrayTwo];

    for (auto i=0;i<LengthSubArrayOne;i++) LeftArray[i]=arr[left+i];
    for (auto i=0;i<LengthSubArrayTwo;i++) RightArray[i]=arr[middle+1+i];

    int initialIndexSubArrayOne=0;
    int initialIndexSubArrayTwo=0;
    int indexMergeArray=left;

    while(initialIndexSubArrayOne<LengthSubArrayOne && initialIndexSubArrayTwo<LengthSubArrayTwo){
        if (LeftArray[initialIndexSubArrayOne]<=RightArray[initialIndexSubArrayTwo]){
            arr[indexMergeArray]=LeftArray[initialIndexSubArrayOne];
            initialIndexSubArrayOne++;
        }
        else{
            arr[indexMergeArray]=RightArray[initialIndexSubArrayTwo];
            initialIndexSubArrayTwo++;

        }
        indexMergeArray++;
    }

    while(initialIndexSubArrayOne<LengthSubArrayOne){
        arr[indexMergeArray]=LeftArray[initialIndexSubArrayOne];
        indexMergeArray++;
        initialIndexSubArrayOne++;
    }
    while(initialIndexSubArrayTwo<LengthSubArrayTwo){
        arr[indexMergeArray]=RightArray[initialIndexSubArrayTwo];
        indexMergeArray++;
        initialIndexSubArrayTwo++;
    }




}
void mergeSort(int arr[],int start,int end){
    if (start>=end) return;
    auto middle = start+ (end-start)/2;
    
    mergeSort(arr,start,middle);
    mergeSort(arr,middle+1,end);
    merge(arr,start,middle,end);
}
int main(){
    int arr[6]={7,5,3,9,1,0};
    affiche(arr,0,6);
    cout<<"Starting MergeSort ...."<<endl;
    mergeSort(arr,0,5);
    affiche(arr,0,6);
    return 0;
}