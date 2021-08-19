#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    unordered_set<int> sset;

    int arr[] = {10,20,10,20,30};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        sset.insert(arr[i]);
    }
    cout<<sset.size()<<endl;
    return 0;
}
