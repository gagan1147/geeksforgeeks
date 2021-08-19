#include<bits/stdc++.h>



using namespace std;



int main(int argc, char const *argv[])
{
    int arr[] = {50,50,10,40,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_map<int,int> hmap;
    for(int i=0;i<n;i++){
        hmap[arr[i]]++;
    }   
    for(auto x:hmap){
        cout<<x.first<<" : "<<x.second<<endl;
    }
    return 0;
}
