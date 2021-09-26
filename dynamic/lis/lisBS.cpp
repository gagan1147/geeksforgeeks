#include<bits/stdc++.h>
using namespace std;

int ceilIndex(int tail[],int l,int r,int x){
    while (r>l){

        int m = l + (r-l)/2;
        if(tail[m]>=x){
            r = m;
        }
        else{
            l = m+1;
        }
    }
    return r;
    
}

int solve(int arr[],int n){
    int tail[n],len=1;
    tail[len-1] = arr[0];
    for(int i=1;i<n;i++){
        if(tail[len-1]<arr[i]){
            tail[len++] = arr[i];
        }
        else{
            int c = ceilIndex(arr,0,len-1,arr[i]);
            tail[c] = arr[i];
        }
    }
    return len;
}


int main(int argc, char const *argv[]){
    

    int arr[] = {10,9,2,5,3,7,101,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n)<<endl;
    return 0;
}