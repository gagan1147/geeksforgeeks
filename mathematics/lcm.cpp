
#include<bits/stdc++.h>

using namespace std;

int lcm_naive(int a,int b){
    int res = max(a,b);
    while(true){
        if(res%a==0 && res%b==0){
            return res;
        }
        res++;
    }
    
}
int gcd(int a,int b){
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int lcm_efficient(int a,int b){

    return (a*b)/gcd(a,b);
}
int main(int argc, char const *argv[])
{
    cout<<lcm_naive(4,6);
    cout<<endl;
    cout<<lcm_efficient(4,6);
    cout<<endl;
    return 0;
}
