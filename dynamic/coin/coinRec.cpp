#include<bits/stdc++.h>

using namespace std;


int solve(int coin[],int n,int sum){
    if( n == 0){
        return 0;
    }
    if(sum ==0){
        return 1;
    }
    int res = solve(coin,n-1,sum);
    if(coin[n-1]<=sum){
        res += solve(coin,n,sum-coin[n-1]); 
    }
    return res;
}


int main(int argc, char const *argv[]){

    int coin[] = {2,3,5,6};
    int n = 4,sum = 10;
    cout<<solve(coin,n,sum)<<endl;
    return 0;
}
