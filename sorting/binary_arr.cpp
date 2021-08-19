

#include<bits/stdc++.h>
using namespace std;

void binSort(int arr[], int n)
{
    int count_0=0,count_1=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            count_0++;
        }
        else{
            count_1++;
        }
    }
    cout<<count_0<<endl;
    cout<<count_1<<endl;
    for(int i=0;i<count_0;i++){
        arr[i] = 0;
    }
    for(int i=count_0;i<count_1+count_0;i++){
        arr[i] = 1;
    }
    
}
int main(){
    int arr[] = {1,0,1,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    binSort(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
}