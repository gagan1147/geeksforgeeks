#include<bits/stdc++.h>

using namespace std;

void solve_naive(int arr[],int n){

    for(int i=0;i<n;i++){
        if (arr[i]==0){
            for(int j=i+1;j<n;j++){
                if (arr[j]!=0){
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp; 
                }
            }
        }
    }
}

void solve_efficient(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[count]);
            count++;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {10,20,0,0,12,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    //solve_naive(arr,n);
    solve_efficient(arr,n);
    cout<<endl;
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

