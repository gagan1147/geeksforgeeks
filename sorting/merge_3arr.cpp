#include<bits/stdc++.h>
using namespace std;


void solve(int arr[],int brr[],int crr[],int len_arr,int len_brr,int len_crr){

    int i=0,j=0,k=0,l=0;
    int temp[len_arr+len_brr+len_crr];
    while(i<len_arr && j<len_brr && k<len_crr){
        if(arr[i]<=brr[j] && arr[i]<=crr[k]){
            temp[l] = arr[i];
            i++;
        }
        else if(brr[j]<=arr[i] && brr[j]<=crr[k]){
            temp[l] = brr[j];
            j++;
        }
        else if(crr[k]<=arr[i] && crr[k]<=brr[j]){
            temp[l] = crr[k];
            k++;
        }
        l++;
    }

    while(i<len_arr && j<len_brr){
        if(arr[i]<brr[j]){
            temp[l] = arr[i];
            i++;
        }
        else{
            temp[l] = brr[j];
            j++;
        }
        l++;
    }
    while(i<len_arr && k<len_crr){
        if(arr[i]<crr[k]){
            temp[l] = arr[i];
            i++;
        }
        else{
            temp[l] = crr[k];
            k++;
        }
        l++;
    }
    while(j<len_brr && k<len_crr){
        if(brr[j]<crr[k]){
            temp[l] = brr[j];
            j++;
        }
        else{
            temp[l] = crr[k];
            k++;
        }
        l++;
    }
    while(i<len_arr){
        temp[l++] = arr[i++];
    }
    while(j<len_brr){
        temp[l++] = brr[j++];
    }
    while(k<len_crr){
        temp[l++] = crr[k++];
    }
    for(int x:temp){
        cout<<x<<" ";
    }
    cout<<endl;

}





int main(){
    int arr[]={1,2};
    int brr[]={2,3,4};
    int crr[]={4,5,6,7};
    int len_arr = sizeof(arr)/sizeof(arr[0]);
    int len_brr = sizeof(brr)/sizeof(brr[0]);
    int len_crr = sizeof(crr)/sizeof(crr[0]);
    solve(arr,brr,crr,len_arr,len_brr,len_crr);
    return 0;
}