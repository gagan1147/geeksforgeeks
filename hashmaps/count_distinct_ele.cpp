#include<bits/stdc++.h>


using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {10,20,30,40};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int k = 3;
    for(int i=0;i<n-k+1;i++){
        unordered_set<int> set1(arr+i,arr+k+i);
        cout<<set1.size()<<" ";
    }
    cout<<endl;
    return 0;
}
