#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    int arr[] = {10,20,10,30,20,40};
    int brr[] = {20,10,10,40,30,10,20,10,30,20,40};    
    int m = sizeof(arr)/sizeof(arr[0]);
    int n = sizeof(brr)/sizeof(brr[0]);
    unordered_set<int> set1;
    unordered_set<int> :: iterator i1;
    for(int i=0;i<m;i++){
        set1.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        set1.insert(brr[i]);
    }
    for(i1=set1.begin();i1!=set1.end();i1++){
        cout<<(*i1)<<" ";
    }
    cout<<endl;
    cout<<set1.size()<<endl;


    
    
    return 0;
}
