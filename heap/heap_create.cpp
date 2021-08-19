#include<bits/stdc++.h>

using namespace std;

class MinHeap{
    public:
    int *arr;
    int capacity;
    int size;
    MinHeap(int c){
        capacity = c;
        arr = new int[c];
        size = 0;
    }
    int left(int i){
        return (2*i + 1);
    }
    int right(int i){
        return (2*i + 2);
    }
    int parent(int i){
        return (i-1)/2;
    }
    void insert(int x){
        if(size == capacity){
            return;
        }
        size++;
        arr[size-1] = x;
        for(int i=size-1;i!=0;arr[parent(i)]>arr[i]){
            swap(arr[parent(i)],arr[i]);
            i = parent(i);
        }
    }
};

int main(int argc, char const *argv[])
{
    MinHeap minheap1 = MinHeap(10);
    int arr[] = {10,80,15,100,85,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        minheap1.insert(arr[i]);
    }
    return 0;
}
