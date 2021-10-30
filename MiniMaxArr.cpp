#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

void miniMaxSum(vector<string> arr) {
    int max=0;
    for(auto e:arr){
        int s=stoi(e);
        if(s>max) max=s;
    }
    int min=max;
    for(auto e:arr){
        int s=stoi(e);
        if(s<min) min=s;
    }
    int sum1=0,sum2=0;
    for(auto e:arr){
        if(stoi(e)>min) sum1+=stoi(e);
        if(stoi(e)<max) sum2+=stoi(e);
    }
    cout<<sum2<<" "<<sum1;
    
}

int main()
{

    string arr_temp_temp;
    getline(cin, arr_temp_temp);
    vector<string> arr_temp = split(rtrim(arr_temp_temp));

    miniMaxSum(arr_temp);

    return 0;
}