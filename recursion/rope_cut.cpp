#include<bits/stdc++.h>

using namespace std;

int solve(int num,int cut1,int cut2,int cut3){
    if(num==0){
        return num;
    }
    if(num==-1){
        return -1;
    }
    int res = max(solve(num-cut1,cut1,cut2,cut3),max(solve(num-cut2,cut1,cut2,cut3),solve(num-cut3,cut1,cut2,cut3)));
    if(res == -1){
        return res;
    }
    return res+1;
}


int main(int argc, char const *argv[])
{
    cout<<solve(5,1,2,2);
    return 0;
}
