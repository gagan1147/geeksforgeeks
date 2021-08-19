#include<bits/stdc++.h>

using namespace std;

int solve(int arr[],int left,int right,int x){
    if(left>right){
        return -1;
    }
    int mid = (left+right)/2;
    if(arr[mid]>x){
        return solve(arr,left,mid-1,x);
    }
    else if(arr[mid]<x){
        return solve(arr,mid+1,right,x);
    }
    else{
        if(mid==0|| arr[mid] != arr[mid-1]){
            return mid;
        }
        else{
            return solve(arr,left,mid-1,x);
        }
    }
}

int iterative(int arr[],int left,int right,int x){
    int mid;
    while(left<=right){
        mid = (left+right)/2;
        if(arr[mid]>x){
            right = mid-1;
        }
        else if(arr[mid]<x){
            left = mid+1;
        }
        else{
            if(mid == 0 || arr[mid]!=arr[mid-1]){
                return mid;
            }
            else{
                right = mid-1;
            }
        }
    }
    return -1;
}

int main(){
    int arr[] = {10,20,20,20,30,40,50,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,0,n-1,60)<<endl;
    cout<<iterative(arr,0,n-1,60);
    return 0;
}