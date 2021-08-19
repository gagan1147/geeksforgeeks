#include<bits/stdc++.h>

using namespace std;




void union_arr(int arr[],int brr[],int m,int n){
    
    int i=0,j=0;
    while(i<m && j<n){
        if(i>0 && arr[i]==arr[i-1]){
            i++;
            continue;
        }
        if(j>0 && brr[j]==brr[j-1]){
            j++;
            continue;
        }
        if (arr[i]==brr[j]){
            cout<<arr[i]<<" ";
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            cout<<arr[i]<<" ";
            i++;
        }
        else{
            cout<<brr[j]<<" ";
            j++;
        }
    }
    while(i<m){
        cout<<arr[i++]<<" ";
    }
    while(j<n){
        cout<<brr[j++]<<" ";
    }

}
vector<int> findUnion(int arr1[], int arr2[], int n, int m){
    vector<int> vec;
    int i=0,j=0;
    while(i<n && j<m){
        if(i>0 && arr1[i]==arr1[i-1]){
            i++;
            continue;
        }
        if(j>0 && arr2[j]==arr2[j-1]){
            j++;
            continue;
        }
        if(arr1[i]<arr2[j]){
            vec.push_back(arr1[i]);
            i++;
        }
        else if(arr1[i]>arr2[j]) {
            vec.push_back(arr2[j]);
            j++;
        }
        else{
            vec.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    while(i<n){
        vec.push_back(arr1[i++]);
    }
    while(j<m){
        vec.push_back(arr2[j++]);
    }
    return vec;
    
    }

int main(int argc, char const *argv[])
{
    int arr[] = {2,10,20,20};
    int brr[] = {3,20,40};
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    union_arr(arr,brr,m,n);
    cout<<endl;
    vector<int> unin = findUnion(arr,brr,m,n);
    for(auto x:unin){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
