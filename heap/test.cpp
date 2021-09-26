#include<bits/stdc++.h>
using namespace std;



struct MedianFinder{
    MedianFinder() {
    priority_queue<int> maxHeap;
    priority_queue<int,vector<int>,greater<int>> minHeap;
}
    
void addNum(int num) {
    int res = maxHeap.size() + minHeap.size();
    if(res == 0){
        maxHeap.push(num);    
    }
    if(maxHeap.size()>minHeap.size()){
        if(maxHeap.top()>num){
            minHeap.push(maxHeap.top());
            maxHeap.pop();
            maxHeap.push(num);
        }
        else{
            minHeap.push(num);
        }
        //temp.push_back((maxHeap.top()+minHeap.top())/2.0);
    }
    else{
        if(num>minHeap.top()){
            maxHeap.push(minHeap.top());
            minHeap.pop();
            minHeap.push(num);
        }
        else{
            maxHeap.push(num);
        }
            //temp.push_back(maxHeap.top());
    }
}

double findMedian() {
    int res = maxHeap.size() + minHeap.size();
    if(res == 0){
        return 0.0;
    }
    if(res%2 == 0){
        return (maxHeap.top()+minHeap.top())/2.0;    
    }
    else{
        return maxHeap.top();
    }
}
};


int main(int argc, char const *argv[]){
    

    struct MedianFinder m1 = new MedianFinder();
    m1.addNum(2);
    

    return 0;
}




