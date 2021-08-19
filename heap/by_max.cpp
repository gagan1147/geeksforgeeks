// By Max Item with Given sum


#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[]){
    
    int arr[] = {5,111,12,200,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    priority_queue<int,vector<int>,greater<int>> p1(arr,arr+n);
    int sum  = 10;
    int count = 0;
    while(p1.top()<=sum){
        count++;
        sum = sum - p1.top();
        p1.pop();
    }
    cout<<count<<endl;
    return 0;
}
