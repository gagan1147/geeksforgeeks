#include<bits/stdc++.h>
using namespace std;



int last(int arr[],int left,int right,int x,int n){
    int mid=0;
    while (left<=right){
        mid = (left+right)/2;
        if(arr[mid]>x){
            right = mid - 1;
        }
        else if(arr[mid]<x){
            left = mid + 1;
        }
        else{
            if(mid == n-1 || arr[mid]!=arr[mid+1]){
                return mid;
            }
            else{
                left = mid+1;
            }
        }
    }
    return -1;
}
int first(int arr[],int left,int right,int x){
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
    int arr[] = {0,0,0,0,0,1,1,1,1,1,1,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<last(arr,0,n-1,1,n)-first(arr,0,n-1,1)+1<<endl;

}