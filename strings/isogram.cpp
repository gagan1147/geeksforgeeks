
#include<bits/stdc++.h>

using namespace std;

bool isIsogram(string s){
    unordered_map<char,int> map1;
    for(int i=0;i<s.length();i++){
        map1[s[i]]++;
    }
    for(auto x:map1){
        if(x.second>1){
            return false;
        }
    }
    return true;
}


int main(int argc, char const *argv[])
{
    string S = "geeks";
    cout<<isIsogram(S)<<endl;
    return 0;
}
