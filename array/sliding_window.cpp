#include<bits/stdc++.h>

using namespace std;

int solve(int arr[],int n,int k){
    int arr_sum =0;
    for(int i=0;i<k;i++){
        arr_sum = arr_sum + arr[i];
    } 
    int res = arr_sum;
    for(int i=k;i<n;i++){
        arr_sum = arr_sum - arr[i-k] + arr[i];
        res = max(res,arr_sum);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5,-10,6,90,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k = 2;
    cout<<solve(arr,n,k)<<endl;
    return 0;
}
