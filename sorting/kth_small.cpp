#include<bits/stdc++.h>

using namespace std;

int partition(int arr[],int l,int r){
    int pivot = arr[r];
    int i = l-1;
    for(int j=l;j<=r-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[r]);
    return i+1;
}

int kth_small(int arr[],int n,int k){
    int low = 0,high =n-1;
    while(low<=high){
        int p = partition(arr,low,high);
        if(p==k-1){
            return arr[p];
        }
        else if(p>k-1){
            high = p-1;
        }
        else{
            low = p+1;
        }
    }
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {10,4,5,8,11,6,26};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<kth_small(arr,n,5)<<endl;
    return 0;
}
