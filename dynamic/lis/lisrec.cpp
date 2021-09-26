#include<bits/stdc++.h>
using namespace std;



int solve(int arr[],int n){

    int lis[n];
    
    lis[0] = 1;
    int res = 0;
    for(int i=1;i<n;i++){
        lis[i] = 1;
        for(int j=0;j<i;j++){
            if(arr[i]>arr[j]){
                lis[i] = max(lis[i],lis[j]+1);
                res = max(res,lis[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<lis[i]<<" ";
    }
    cout<<endl;
    return res;
}

int main(int argc, char const *argv[]){
    

    int arr[] = {10,9,2,5,3,7,101,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n)<<endl;
    return 0;
}
