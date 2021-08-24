#include<bits/stdc++.h>

using namespace std;

int solve(string s1,string s2,int m,int n){
    int table[m+1][n+1];
    string temp="";
    
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i==0||j==0){
                table[i][j] = 0;
            }
            else{
                if(s1[i-1] == s2[j-1] && i!=j){
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
    

    string s1 = "AABB";
    string s2 = s1;
    // reverse(s2.begin(),s2.end());
    int m = s1.length();
    int n = m;
    cout<<solve(s1,s2,m,n)<<endl;
    return 0;
}
