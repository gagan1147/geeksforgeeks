#include<bits/stdc++.h>

using namespace std;


int sum(int num){
    if(num==0){
        return num;
    }
    else
        return num%10 + sum(num/10);
    
}


int main(int argc, char const *argv[])
{
    cout<<sum(235);
    return 0;
}
