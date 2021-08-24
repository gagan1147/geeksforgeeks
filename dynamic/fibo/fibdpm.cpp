#include<bits/stdc++.h>
using namespace std;




int fibo(int n,int memo[]){
    
    if(memo[n] == -1){
        if(n==1 || n==0){
            return n;
        }
        memo[n] = fibo(n-1,memo) + fibo(n-2,memo);
    }
    return memo[n];
   

}

int main(int argc, char const *argv[]){
    
    int n = 20;
    int memo[n];
    for(int i=0;i<=n;i++){
        memo[i] = -1;
    }
    memo[0] = 0;
    memo[1] = 1;
    
    cout<<fibo(n,memo)<<endl;
    for(int i=0;i<=n;i++){
        cout<<memo[i]<<" ";
    }
    cout<<endl;
    return 0;
}
