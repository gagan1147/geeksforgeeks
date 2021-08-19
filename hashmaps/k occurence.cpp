// n/k Occurences

#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {30,10,20,30,30,40,30,40,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> map1;
    int k=2;
    for(int i=0;i<n;i++){
        map1[arr[i]]++;
    }
    for(auto x:map1){
        if(x.second > n/k){
            cout<<x.first<<" ";
        }
    }
    cout<<endl;
    
    return 0;
}
