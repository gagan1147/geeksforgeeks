//sort k sorted array
#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    

    priority_queue<int,vector<int>,greater<int>> pq;
    int arr[] = {10,9,7,8,4,70,50,60};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0,k=4;
    for(int i=0;i<=k;i++){
        pq.push(arr[i]);
    }
    for(int i=k+1;i<n;i++){
        arr[index++] = pq.top();
        pq.pop();
        pq.push(arr[i]);
    }
    while(!pq.empty()){
        arr[index++] = pq.top();
        pq.pop();
    }
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}

