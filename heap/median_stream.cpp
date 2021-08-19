#include<bits/stdc++.h>

using namespace std;



vector<double> solve(vector<int> arr){
    int size = arr.size();
    vector<double> temp;
    
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    int i=0;
    temp.push_back(arr[i]);
    maxHeap.push(arr[i]);
    for(int i=1;i<size;i++){
        if(maxHeap.size()>minHeap.size()){
            if(maxHeap.top()>arr[i]){
                minHeap.push(maxHeap.top());
                maxHeap.pop();
                maxHeap.push(arr[i]);
            }
            else{
                minHeap.push(arr[i]);
            }
            temp.push_back((maxHeap.top()+minHeap.top())/2.0);
        }
        else{
            if(arr[i]>minHeap.top()){
                maxHeap.push(minHeap.top());
                minHeap.pop();
                minHeap.push(arr[i]);
            }
            else{
                maxHeap.push(arr[i]);
            }
             temp.push_back(maxHeap.top());
        }

    }
    string te;
    getline(cin,te);
    return temp;
    
}




int main(int argc, char const *argv[]){
    
    vector<int> arr = {25,7,10,15,20};
    vector<double> temp  = solve(arr);
    for(double x: temp){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
