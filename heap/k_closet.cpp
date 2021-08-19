#include<bits/stdc++.h>

using namespace std;

void naive(int arr[],int n,int x,int k){
    bool visited[n] = {false};

    for(int i=0;i<k;i++){
        int min_diff = INT16_MAX;
        int min_diff_index = 0;
        for(int j=0;j<n;j++){
            int diff = abs(x-arr[j]); 
            if(!visited[j] && diff<min_diff){
                min_diff = diff;
                min_diff_index = j;
            }
        }
        visited[min_diff_index] = true;
        cout<<arr[min_diff_index]<<" ";
    }
    
}


void efficient(int arr[],int n,int x,int k){
    priority_queue<pair<int,int>> maxHeap;
    for(int i=0;i<k;i++){
        int diff = abs(arr[i]-x);
        maxHeap.push({diff,i}); 
    }
    for(int i=k;i<n;i++){
        int diff = abs(arr[i]-x);
        if(diff<maxHeap.top().first){
            maxHeap.pop();
            maxHeap.push({diff,i});
        }
    }
    for(int i=0;i<k;i++){
        cout<<arr[maxHeap.top().second]<<" ";
        maxHeap.pop();
    }
}



int main(int argc, char const *argv[]){
    int arr[] = {30,40,32,33,36,37};
    int n = sizeof(arr)/sizeof(arr[0]);
    int x=38,k=3;
    naive(arr,n,x,k);
    cout<<endl;
    efficient(arr,n,x,k);
    cout<<endl;
    return 0;
}
