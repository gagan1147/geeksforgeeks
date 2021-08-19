#include<bits/stdc++.h>

using namespace std;

void solve(int arr[],int n){
    int count = 1;
    int i;
    for(i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            count++;
        }
        else{
            cout<<arr[i]<<" "<<count;
            cout<<endl;
            count = 1;
        }
    }
    cout<<arr[i]<<" "<<count<<" ";
}


int main(int argc, char const *argv[])
{
    int arr[]={10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    solve(arr,n);
    return 0;
}
