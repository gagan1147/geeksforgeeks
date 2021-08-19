#include<bits/stdc++.h>

using namespace std;

void divisor(int n){
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
}
void divisor_efficient(int n){
    for(int i=1;i*i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        
        if(i!=n/i){
            cout<<n/i<<" ";
        }
        }
    }
}

int main(int argc, char const *argv[])
{
    divisor(15);
    cout<<endl;
    divisor_efficient(15);
    return 0;
}
