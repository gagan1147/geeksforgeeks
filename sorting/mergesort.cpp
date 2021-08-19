#include<bits/stdc++.h>

using namespace std;



void merge_arr(int arr[],int l,int m,int r){
    int len_a = m-l+1;
    int len_b = r-m;
    
    int a[len_a];
    int b[len_b];

    for(int i=0;i<len_a;i++){
        a[i] = arr[i];
        b[i] = arr[i+m+1];
    }
    /*
    for(int i=0;i<len_a;i++){
        cout<<a[i]<<" ";                                                               
    }
    cout<<endl;
    for(int i=0;i<len_b;i++){
        cout<<b[i]<<" ";
    }
    cout<<endl;
    */
    int i=0,j=0,k=0;
    
    while(i<len_a && j<len_b){
        if(a[i]<b[j]){
            arr[k++] = a[i++];
        }
        else{
            arr[k++] = b[j++];
        }
    }
    while(i<len_a){
        arr[k++] = a[i++];
    }
    while(j<len_b){
        arr[k++] = b[j++];
    }
    /*
    for(int i=0;i<len_b+len_a;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    */
}


void mergesort(int arr[],int l,int r){
    if(r>l){
        int m = l + (r-l)/2;
        mergesort(arr,l,m);
        mergesort(arr,m+1,r);
        merge_arr(arr,l,m,r);
    }
}




int main(int argc, char const *argv[])
{
    int arr[] = {1,3,5,7,9,2,4,6,8};
    int n = sizeof(arr)/sizeof(arr[0]);
    int m = 0 + ((n-1)-0)/2;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    merge_arr(arr,0,m,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
