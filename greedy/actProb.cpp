#include<bits/stdc++.h>
using namespace std;


bool myCmp(pair<int,int> a,pair<int,int> b){
    return a.second < b.second;
}

int solve(pair<int,int> arr[],int n){

    int res = 1,prev=0;
    sort(arr,arr+n,myCmp);
    for(int curr=1;curr<n;curr++){
        if( arr[curr].first >= arr[prev].second){
            res++;
            prev = curr;
        }
    }
    return res;
}





int main(int argc, char const *argv[]){
    
    int n = 3;    
    pair<int,int> arr[]= { {12,25} , {10,20} , {20,30}};
    
    cout<<solve(arr,n);

    return 0;
}
