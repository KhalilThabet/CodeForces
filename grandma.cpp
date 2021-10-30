#include <string>
#include <iostream>
using namespace std;
string longestPalindrome(string s) {

        // Start typing your C/C++ solution below
        // DO NOT write int main() function
        if(s.size()==0) return "";
        string trans("&#");
        for(int i=0;i<s.size();i++)
        {
            trans+=s[i];
            trans+='#';
        }
        int *p=new int[trans.size()];
        p[0]=0;
        int i,mx=0,id;  
        for(i=1;i<trans.size();i++)  
        {  
           if(mx>i)  
              p[i]=min(p[2*id-i],mx-i);  
           else  
              p[i]=1;  
           for(;trans[i+p[i]]==trans[i-p[i]];p[i]++);  
           if(p[i]+i>mx)  
           {  
              mx=p[i]+i;  
              id=i;  
           }  
        } 
        int max_len=0;
        int max_index=0;
	 
	    for(i=1;i<trans.size();i++)
	    {
	      if(p[i]>max_len)
	      {
	        max_len=p[i];
	        max_index=i;
	      }
	    }
        max_len--;
        int start=max_index-max_len;
        int end=max_index+max_len;
        string ret;
        for(int j=start;j<=end;j++)
        {
            if(trans[j]!='#') ret+=trans[j];
        }
        return ret;
    }
int main(){
    cout<<longestPalindrome("bbbabcbbb");
}