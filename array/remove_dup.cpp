#include<bits/stdc++.h>

using namespace std;

void solve(int arr[],int n){

    int res = 1;
    for(int i=1;i<n;i++){
        if(arr[i]!=arr[res-1]){
            arr[res] = arr[i];
            res++;
        }
    }
    //return arr;
}



int main(int argc, char const *argv[])
{
    int arr[] = {10,20,20,30,30,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    solve(arr,n);
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

