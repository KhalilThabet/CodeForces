#include<vector>
#include <iostream>
using namespace std;
int isValidSubsequence(vector<int> array,vector<int> sequence) {
  int index=0;
	for(int i=0;i<array.size();i++) {
		if(array[i]==sequence[index]) {
            
            i=-1;
            index++;
            }
		if(index==sequence.size()) return true;
	}
	return false;
}

int main(){
    vector<int> v={4,3,2,7};
    vector<int> v1={7,3,2};
    cout<<isValidSubsequence(v,v1);
}