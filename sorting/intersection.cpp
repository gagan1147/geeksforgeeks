#include<bits/stdc++.h>

using namespace std;



int count = 0;
void intersection(int arr[],int brr[],int m,int n){
    
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && arr[i]==arr[i-1]){
            i++;
            continue;
        }
        if (arr[i]==brr[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
    

}

int main(int argc, char const *argv[])
{
    int arr[] = {1,1,3,3,3};
    int brr[] = {1,1,1,1,3,5,7};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    intersection(arr,brr,m,n);
    cout<<count<<endl;
    return 0;
}
