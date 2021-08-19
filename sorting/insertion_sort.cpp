#include<bits/stdc++.h>

using namespace std;

void insertion_sort(int arr[],int n){

    for(int i=1;i<n;i++){
        int key = arr[i];
        int j = i-1;
        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
            
        }
        arr[j+1] = key;
    }

}
int main(int argc, char const *argv[])
{
    int arr[] = {7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    insertion_sort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
