#include<bits/stdc++.h>

using namespace std;


void lpartition(int arr[],int l,int h){
    int pivot = arr[h];
    int i=l-1,temp;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
}

int main(){
    int arr[] = {10,3,8,4,2,7,1,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    lpartition(arr,0,n-1);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}