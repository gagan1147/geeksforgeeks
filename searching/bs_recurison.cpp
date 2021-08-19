

#include<bits/stdc++.h>


using namespace std;

int bs(int arr[],int left,int right,int x){
    if(left>right){
        return 0;
    }
    int mid = (left+right)/2;
    if(arr[mid] == x){
        return 1;
    }
    else if(arr[mid]>x){
        return bs(arr,left,mid-1,x);
    }
    else{
        return bs(arr,mid+1,right,x);
    }
}

int main(){
    int arr[] = {10,20,30,40,50,60,70,80};
    int n = sizeof(arr)/sizeof(arr[0]);
    bs(arr,0,n-1,110)?cout<<"Found":cout<<"Not Found";
}