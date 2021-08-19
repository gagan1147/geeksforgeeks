#include<bits/stdc++.h>

using namespace std;

int lpartition(int arr[],int l,int h){
    int pivot = arr[h];
    int i=l-1,temp;
    for(int j=l;j<=h-1;j++){
        if(arr[j]<pivot){
            i++;
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
    temp = arr[i+1];
    arr[i+1] = arr[h];
    arr[h] = temp;
    return i+1;
}

void q_sort(int arr[],int l,int r){

    if (l<r){
        int p = lpartition(arr,l,r);
        q_sort(arr,l,p-1);
        q_sort(arr,p+1,r);
    }
}


int main(int argc, char const *argv[])
{
    int arr[] = {8,4,7,9,3,10,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    q_sort(arr,0,n-1);
    //lpartition(arr,0,n-1);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
