#include<bits/stdc++.h>

using namespace std;

int naive_solve(int arr[],int n){

    
    for(int i=0;i<n;i++){
        int count = 1;
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>(n/2)){
            return arr[i];
        }
    }

    return -1;
}

int efficient_solve(int arr[],int n){
    int count=1,res=0;
    for(int i=1;i<n;i++){
        if(arr[res] == arr[i]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            res = i;
            count = 1;
        }
    }
    count =0;
    for(int i=0;i<n;i++){
        if(arr[res] == arr[i]){
            count++;
        }
    }
    if(count<=n/2){
        return -1;
    }
    return arr[res];
}




int main(int argc, char const *argv[])
{
    int arr[] = {8,7,6,8,6,6,6,6,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<naive_solve(arr,n)<<endl;
    cout<<efficient_solve(arr,n)<<endl;
    return 0;
}
