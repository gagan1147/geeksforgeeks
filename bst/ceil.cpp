#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[]){
    

    int arr[]={2,8,30,15,25,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    set<int> set1;
    set1.insert(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        if(set1.lower_bound(arr[i])!=set1.end()){
            cout<<*(set1.lower_bound(arr[i]))<<" ";
        }
        else{
            cout<<-1<<" ";
        }
        set1.insert(arr[i]);
    }
    cout<<endl;


    return 0;
}
