#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10,20,10,30,20,40};
    int brr[] = {20,10,10,40,30,10,20,10,30,20,40};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    unordered_set<int> s_arr(arr,arr+m);
    int res = 0;
    for(auto x:s_arr){
        cout<<x<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        if(s_arr.count(brr[i]) == 1){
            res++;
            s_arr.erase(brr[i]);
        }
    }
    cout<<res<<endl;

    return 0;
}
