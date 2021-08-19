
#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> delete_node(priority_queue<int,vector<int>,greater<int>> minHeap,int data){
    
    priority_queue<int,vector<int>,greater<int>> temp;
    vector<int> vec1;
    while(!minHeap.empty()){
        if(minHeap.top()==data){
            minHeap.pop();
            continue;
        }
        else{
            vec1.push_back(minHeap.top());
        }
        minHeap.pop();
    }
    for(int x:vec1){
        temp.push(x);
    }
    return temp;
}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<int> res;
    int n;
    cin>>n;
    priority_queue<int,vector<int>,greater<int>> minHeap;
    for(int i=0;i<n;i++){
        int element;
        int query;
        cin>>query;
        if (query == 1) {
            cin>>element;
            minHeap.push(element);
        }
        else if (query==2){
            cin>>element;
            minHeap = delete_node(minHeap, element);
        }
        else if (query==3){
            res.push_back(minHeap.top());
        }
    }
    for(int x:res){
        cout<<x<<endl;
    }
    
    return 0;
}
