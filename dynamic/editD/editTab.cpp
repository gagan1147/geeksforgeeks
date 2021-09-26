#include<bits/stdc++.h>

using namespace std;

int solve(string s1,string s2,int m,int n){
    int table[m+1][n+1];
    for(int i=0;i<=m;i++){
        table[i][0] = i;
    }
    for(int i=1;i<=n;i++){
        table[0][i] = i;
    }
    for(int i=1;i<=m;i++){
        for(int j=1;j<=n;j++){
            if(s1[i-1] == s2[j-1]){
                table[i][j] = table[i-1][j-1];
            }
            else{
                table[i][j] = 1+min(table[i-1][j],min(table[i-1][j-1],table[i][j-1]));
            }
        }
    }
    return table[m][n];
    
}




int main(int argc, char const *argv[]){
    
    string s1 = "SATURDAY";
    string s2 = "SUNDAY";
    int m = s1.length();
    int n = s2.length();
    cout<<solve(s1,s2,m,n)<<endl;

    return 0;
}
