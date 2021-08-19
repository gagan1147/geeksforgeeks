#include<bits/stdc++.h>

using namespace std;

int naive(int arr[],int n){
    int res = arr[1] - arr[0];
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j]-arr[i]>=res){
                res = arr[j]-arr[i];
            }
        }
    } 
    return res;
}

int efficient(int arr[],int n){
    int minVal = arr[0];
    int res = arr[1]-arr[0];
    for(int i=1;i<n;i++){
        res = max(res,arr[i]-minVal);
        minVal = min(minVal,arr[i]);
    }
    return res;
}


int main(int argc, char const *argv[])
{
    int arr[]={2,3,10,6,4,8,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<efficient(arr,n);
    
    return 0;
}
