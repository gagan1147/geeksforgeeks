#include<bits/stdc++.h>

using namespace std;

int solve(int arr[],int n){
    
   int res = arr[0];
   int maxEnding = arr[0];
   for(int i=1;i<n;i++){
       maxEnding = max(maxEnding+arr[i],arr[i]);
       res = max(res,maxEnding);
   }
   return res;
}



int main(int argc, char const *argv[])
{
    int arr[]={-3,8,-2,4,-5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<solve(arr,n)<<endl;
    return 0;
}
