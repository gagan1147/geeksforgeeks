#include<bits/stdc++.h>

using namespace std;


void solve(int arr[],int n){
    int low = 0,mid =0,high = n-1;
    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    return ;
}


int main(int argc, char const *argv[])
{
    int arr[] = {0,0,0,2,2,2,2,1,1,1,1,2,1,0,0,2,2,1,1,1,1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    
    cout<<endl;
    solve(arr,n);
     for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
