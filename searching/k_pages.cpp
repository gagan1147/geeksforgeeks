
#include<bits/stdc++.h>

using namespace std;

int sum(int arr[],int start,int end){
    int s = 0;
    for(int i=start;i<=end;i++){
        s += arr[i];
    }    
    return s;
}

int k_pages(int arr[],int n,int k){
    if(k==1){
        return sum(arr,0,n-1);
    }
    if(n==1){
        return arr[n-1];
    }
    int res = INT16_MAX;
    for(int i=1;i<n;i++){
        res = min(res,max(k_pages(arr,i,k-1),sum(arr,i,n-1)));
    }
    return res;
}

bool isFeasible(int arr[],int n,int k,int ans){
    int req = 1;
    int sum = 0;
    for(int i=0;i<n;i++){
        if(sum+arr[i]<=ans){
            sum += arr[i];
        }
        else{
            req++;
            sum = arr[i];
        }
    }
    return (req<=k);
}
int efficient(int arr[],int n,int k){
    int res,mx=0,sum=0,low,high;
    
    for(int i =0;i<n;i++){
        sum += arr[i];
        mx = max(mx,arr[i]);
    }
    low = mx;
    high = sum;
    while(low<=high){
        int mid = (low+high)/2;
        if(isFeasible(arr,n,k,mid)){
            res = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr[] = {950, 650, 250, 250, 350, 100, 650, 150, 150, 700};
    int k = 6;
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<k_pages(arr,n,k)<<endl;
    cout<<efficient(arr,n,k)<<endl;
    return 0;
}