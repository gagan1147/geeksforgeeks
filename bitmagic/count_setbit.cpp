#include<bits/stdc++.h>

using namespace std;


int kth_bit(int num){
    int res = 0;
    while(num){
        if(num%2==1){
            res++;
        }
        num = num>>1;
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int num=5;
    cout<<kth_bit(num)<<endl;
    return 0;
}
