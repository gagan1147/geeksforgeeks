#include<bits/stdc++.h>
using namespace std;



int solve(string s1,string s2,int m,int n){
    if(m==0 || n==0){
        return 0;
    }
    if(s1[m-1] == s2[n-1]){
        return 1+solve(s1,s2,m-1,n-1);
    }
    return max(solve(s1,s2,m-1,n),solve(s1,s2,m,n-1));
}


int main(int argc, char const *argv[]){
    
    string s1 = "ABCDGH";
    string s2 = "AEDFHR";
    int m = s1.length();
    int n = s2.length();
    cout<<solve(s1,s2,m,n)<<endl;
    return 0;
}
