// Print K-Largest Elements


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    int arr[] = {8,6,4,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int> maxHeap(arr,arr+n); //using Max - heap
    int k = 3;
    for(int i=0;i<k;i++){
        cout<<maxHeap.top()<<" ";
        maxHeap.pop();
    }
    cout<<endl;
    //
    priority_queue<int,vector<int>,greater<int>> minHeap(arr,arr+k);
    for(int i=k;i<n;i++){
        if (arr[i]>minHeap.top())
        minHeap.pop();
        minHeap.push(arr[i]);
    }
    while(!minHeap.empty()){
        cout<<minHeap.top()<<" ";
        minHeap.pop();
    }
    cout<<endl;
    return 0;
}
