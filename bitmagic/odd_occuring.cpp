#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[]={8,7,7,8,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int res = arr[0];
    for(int i=1;i<size;i++){
        res = res ^ arr[i]; 
    }
    cout<<res;
    return 0;
}