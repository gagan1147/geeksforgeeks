#include<bits/stdc++.h>

using namespace std;


int solve(int coin[],int n,int sum){
    int table[sum+1][n+1];
    for(int i=0;i<=n;i++){
        table[0][i] = 1;
    }
    for(int i=1;i<=sum;i++){
        table[i][0] = 0;
    }
    for(int i=1;i<=sum;i++){
        for(int j=1;j<=n;j++){
            table[i][j] = table[i][j-1];
            if(coin[j-1]<=i){
                table[i][j] += table[i-coin[j-1]][j];
            }
        }
    }
    return table[sum][n];
}





int main(int argc, char const *argv[]){
    

    int coin[] = {2,3,5,6};
    int n = 4,sum = 10;
    cout<<solve(coin,n,sum)<<endl;
    
    return 0;
}
