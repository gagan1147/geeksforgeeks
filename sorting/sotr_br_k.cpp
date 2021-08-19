#include<bits/stdc++.h>

using namespace std;


void solve(int arr[],int n,int k){
    multimap<int,int> m;
    multimap<int,int> :: iterator it;
    for(int i=0;i<n;i++){
        m.insert(make_pair(abs(k-arr[i]),arr[i]));
    }
    int i=0;
    for(it=m.begin();it!=m.end();it++){
        arr[i++] = (*it).second;
    }
}
struct compare{
    bool operator()(pair<int,int> p1,pair<int,int> p2){
        return p1.first>p2.first;
    }
};

int new_soln(int arr[],int n,int x){
    int k=n;
    priority_queue<pair<int,int>,vector<pair<int,int>> ,compare> h1;
    for(int i=0;i<k;i++){
        h1.push({abs(arr[i]-x),i});
    }
    int brr[n];
    int i=0;
    while(!h1.empty()){
        brr[i++] = arr[h1.top().second];
        h1.pop();
    }
    i=0;
    while(i<n){
        arr[i] = brr[i];
        i++;
    }

    
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    //solve(arr,n,6);
    new_soln(arr,n,7);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    
    
    return 0;
}