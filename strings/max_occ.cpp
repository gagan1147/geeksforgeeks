#include<bits/stdc++.h>

using namespace std;

char solve(string s){
    int len = s.length();
    int alpha = 256;
    int count[alpha]={0};
    for(int i=0;i<len;i++){
        count[s[i]]++;
    }
    int res =  0;
    char at;
    for(int i=0;i<alpha;i++){
        if (count[i]>res){
            res =  count[i];
            at = i;
        }

    }
    
    return at;
}

int main(int argc, char const *argv[])
{
    string S = "gtttteeksforgeeks";
    cout<<solve(S)<<endl;
    return 0;
}
