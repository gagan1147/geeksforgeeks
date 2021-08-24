#include<bits/stdc++.h>

using namespace std;

// int memo[][] = {}

const int N = 10;
int solve(string s1,string s2,int m,int n,int memo[][N]){

    if(memo[m][n] != -1){
        return memo[m][n];
    }
    if(m==0||n==0){
        memo[m][n] = 0;
    }
    else{
        if(s1[m-1] == s2[n-1]){
            memo[m][n] = 1+solve(s1,s2,m-1,n-1,memo);
        }
        else{
            memo[m][n] = max(solve(s1,s2,m-1,n,memo),solve(s1,s2,m,n-1,memo));
        }
    }
    return memo[m][n];
}

int main(int argc, char const *argv[]){
    

    string s1 = "ABCDGH";
    string s2 = "AEDFHR";
    int m = s1.length();
    int n = s2.length();
    int memo[N][N];
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            memo[i][j] = -1;
        }
    }
    cout<<solve(s1,s2,m,n,memo)<<endl;
    return 0;
}
