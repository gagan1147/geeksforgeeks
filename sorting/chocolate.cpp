

#include<bits/stdc++.h>

using namespace std;


int solve(int arr[],int n,int m){
    if(m>n){
        return -1;
    }
    sort(arr,arr+n);
    int res = arr[m-1] - arr[0];
    for(int i=1;i<n-(m-1);i++){
        res = min(res,arr[m+i-1]-arr[i]);
    }
    return res;
}




int main(int argc, char const *argv[])
{
    int arr[] = {7,3,2,4,9,12,56};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m=3;
    cout<<solve(arr,n,m)<<endl;
    return 0;
}
