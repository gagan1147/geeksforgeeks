#include<bits/stdc++.h>

using namespace std;





int main(int argc, char const *argv[])
{
    int arr[] = {10,8,1,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int res = INT16_MAX;
    for(int i=1;i<n;i++){
        res = min(res,arr[i]-arr[i-1]);
    }    
    cout<<res<<endl;
    return 0;
}
