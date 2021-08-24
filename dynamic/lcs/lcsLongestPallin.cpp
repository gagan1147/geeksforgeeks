#include<bits/stdc++.h>

using namespace std;



int solve(string s1,int n){
    int m = n;
    string s2 = s1;
    reverse(s2.begin(),s2.end());
    int table[m+1][n+1];
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0 || j== 0){
                table[i][j] = 0;
            }
            else{
                if(s1[i-1] == s2[j-1]){
                    table[i][j] = 1 + table[i-1][j-1];
                }
                else{
                    table[i][j] = max(table[i-1][j],table[i][j-1]);
                }
            }
        }
    }
    
    return table[m][n];
}




int main(int argc, char const *argv[]){
    

    string s1 = "GEEKSFORGEEKS";
    int n = s1.length();
    
    cout<<solve(s1,n)<<endl;
    return 0;
}