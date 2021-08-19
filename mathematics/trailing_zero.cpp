
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    //naive solution (overflow)
    
    int num = 10,res_fact=1,res=0;
    for(int i=2;i<=10;i++){
        res_fact *= i;
    }    
    cout<<res_fact;
    while(res_fact%10==0){
        res++;
        res_fact = res_fact/10;
    }
    cout<<endl;
    cout<<res;
    
    //Efficient Solution 

    res = 0;
    num  = 251;
    for(int i=5;i<=num;i=i*5){
        res = res + num/i;
    }
    cout<<endl;
    cout<<res;

    cout<<endl;

    return 0;
}
