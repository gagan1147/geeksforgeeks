#include<bits/stdc++.h>

using namespace std;

struct Triplet{
    int value,apos,vpos;
    Triplet(int v,int a,int pos){
        value = v;
        apos = a;
        vpos = pos;
    }
};

struct myComp{
    bool operator()(Triplet &t1,Triplet &t2){
        return t1.value>t2.value;
    }
};



int main(int argc, char const *argv[]){
    
    vector<vector<int>> arr = {{5,10},{4,9},{6}};
    vector<int> res;
    int k = 3;
    priority_queue<Triplet,vector<Triplet>,myComp> minHeap;
    for(int i=0;i<arr.size();i++){
        Triplet t1(arr[i][0],i,0);
        minHeap.push(t1);
    }
    while(!minHeap.empty()){
        Triplet temp = minHeap.top();
        minHeap.pop();
        res.push_back(temp.value);
        int apos = temp.apos,vpos = temp.vpos;
        if(vpos+1<arr[apos].size()){
            Triplet t1(arr[apos][vpos+1],apos,vpos+1);
            minHeap.push(t1);
        }
    }
    for(int x:res){
        cout<<x<<" ";
    }
    cout<<endl;

    return 0;
}
