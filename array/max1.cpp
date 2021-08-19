#include<bits/stdc++.h>

using namespace std;


int solve(int arr[],int n){
    int res = 0,count_1=0;
    int i;
    for(i=0;i<n;i++){
        if(arr[i]==0){
            res = max(res,count_1);
            count_1=0;
        }
        else{
            count_1++;
        }
    }
    if (arr[i-1]==1){
        res = max(res,count_1);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr[]={0,1,0,1,1,1,0,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n)<<endl;
    return 0;
}
