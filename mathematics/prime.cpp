#include<bits/stdc++.h>

using namespace std;


bool prime_naive(int num){
    if(num==1){
        return false;
    }
    for(int i=2;i<num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}


bool prime_efficient(int num){
    if(num==1){
        return false;
    }
    for(int i=2;i*i<=num;i++){
        if(num%i==0){
            return false;
        }
    }
    return true;
}
bool prime_more_efficient(int num){
    if(num ==1){
        return false;
    }
    if(num == 2 || num ==3){
        return true;
    }
    if(num%2==0 || num%3==0){
        return false;
    }
    for(int i=5;i*i<=num;i=i+6){
        if(num%i==0 || num%(i+2)==0){
            return false;
        }
    }
    return true;
}
int main(int argc, char const *argv[])
{
    cout<<prime_naive(7);
    cout<<endl;
    cout<<prime_efficient(7);
    cout<<endl;
    cout<<prime_more_efficient(1032);
    return 0;
}
