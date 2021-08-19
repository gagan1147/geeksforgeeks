
#include<bits/stdc++.h>

using namespace std;

int gcd_naive(int a,int b){
    int res = min(a,b);
    while(res>0){
        if(a%res==0 && b%res==0){
            break;
        }
        res--;
    }
    return res;
}

int gcd_efficient(int a,int b){
    if(b==0){
        return a;
    }
    return gcd_efficient(b,a%b);
}

int main(int argc, char const *argv[])
{
    cout<<gcd_naive(10,15);
    cout<<endl;
    cout<<gcd_efficient(10,15);
    cout<<endl;
    return 0;
}
