#include<bits/stdc++.h>

using namespace std;


int main(){
    int arr[]={10,20,30,40,50,60,70};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=10,l,r;
    l = 0;
    r = n-1;
    while(l<=r){
        int mid = (l+r)/2;
        if(arr[mid] == x){
            cout<<"Found";
            break;
        }
        else if(arr[mid]>x){
            r = mid-1;
        }
        else{
            l = mid+1;
        }
    }
    if(l>r){
        cout<<"Not Found";
    }


}