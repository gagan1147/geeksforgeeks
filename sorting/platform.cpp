#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {900,600,700};
    int dep[] = {1000,800,730};
    int n = sizeof(arr)/sizeof(arr[0]);
    int i=1,j=0,res=1,curr=1;
    sort(arr,arr+n);
    sort(dep,dep+n);
    while(i<n && j<n){
        if(arr[i]<=dep[j]){
            curr++;
            i++;
        }
        else{
            curr--;
            j++;
        }
        res = max(res,curr);
    }
    cout<<res<<endl;
    return 0;
}
