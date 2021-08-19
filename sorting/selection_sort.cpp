#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10,9,8,7,6,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

    for(int i=0;i<n-1;i++){
        int min_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }
        int temp = arr[min_index];
        arr[min_index] = arr[i];
        arr[i] = temp;
    }
     for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}