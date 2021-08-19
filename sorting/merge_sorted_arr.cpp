#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {1,3,5,7,9};
    int brr[] = {2,4,6,8,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int temp[n+n];
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
     for(int x:brr){
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> vec;
    int i=0,j=0;
    
    while(i<n && j<n){
        if(arr[i]<brr[j]){
            vec.push_back(arr[i]);
            i++;
        }
        else{
            vec.push_back(brr[j]);
            j++;
        }

    }
    while(i<n){
        vec.push_back(arr[i]);
            i++;
    }
    while(j<n){
        vec.push_back(brr[j]);
            j++;
    }
    for(auto x:vec){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}