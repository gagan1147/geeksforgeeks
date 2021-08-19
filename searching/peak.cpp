#include<bits/stdc++.h>

using namespace std;


int peak_element(int arr[],int n){

    int left = 0,right = n-1;
    while(left<=right){
        int mid = (left + right)/2;
        if((mid == 0 || arr[mid-1] <= arr[mid])&&(mid == n-1 || arr[mid+1] <= arr[mid])){
            return arr[mid];
        }
        else{
            if (mid>0 && arr[mid-1]>=arr[mid]){
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
    }  
    return -1;
}

int main(int argc, char const *argv[])
{
    int arr[] = {5,20,40,30,20,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<peak_element(arr,n);
    return 0;
}
