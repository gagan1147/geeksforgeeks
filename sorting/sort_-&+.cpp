#include<bits/stdc++.h>

using namespace std;


void solve(int arr[],int n){
    int i=-1,j=n;
    while (true)
    {
        do{
            i++;
        } while (arr[i]<0);
        do{
            j--;
        } while (arr[j]>=0);
        if(i>=j){
            return;
        }
        swap(arr[i],arr[j]);
    }
    
}

void lpartition(int arr[],int n){
    int i=-1,j=n;


    for(int j=0;j<n-1;j++){
        if(arr[j]<0){
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[j-1]);
    return;
}

int main(int argc, char const *argv[])
{
    int arr[] = {-12,18,-10,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    lpartition(arr,n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
