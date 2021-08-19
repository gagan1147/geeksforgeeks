

#include<bits/stdc++.h>


using namespace std;

int solve(int arr[],int n){
    
    int profit=0;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1])
            profit += arr[i]-arr[i-1];
    }
    
    return profit;
}


int main(int argc, char const *argv[])
{
    int arr[]={1,5,3,8,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n)<<endl;
    return 0;
}
