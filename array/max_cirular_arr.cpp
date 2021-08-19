#include<bits/stdc++.h>

using namespace std;

int solve(int arr[],int n){
    
   int res = arr[0];
   for(int i=0;i<n;i++){
       int curr_max = arr[i];
       int curr_sum =arr[i];
       for(int j=1;j<n;j++){
           int index = (i+j)%n;
           curr_sum += arr[index];
           curr_max = max(curr_max,curr_sum);
       }
       res = max(res,curr_max);
   }
   return res;
}

int kadane(int arr[],int n){
    int maxEnding = arr[0];
    int res = arr[0];
    for(int i=1;i<n;i++){
        maxEnding = max(maxEnding+arr[i],arr[i]);
        res = max(maxEnding,res);
    }
    
    return res;
}

int efficient(int arr[],int n){
    int max_normal = kadane(arr,n);
    if(max_normal<0){
        return max_normal;
    }
    int arr_sum=0;
    for(int i=0;i<n;i++){
        arr_sum = arr_sum + arr[i];
        arr[i] = -arr[i];
    }
    int max_circular_sum = arr_sum+kadane(arr,n);
    return max(max_circular_sum,max_normal);
}



int main(int argc, char const *argv[])
{
    int arr[]={5,-2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    //cout<<solve(arr,n)<<endl;
    cout<<efficient(arr,n)<<endl;
    return 0;
}
