
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(int arr[],int n){
    //int *brr = (int *)malloc(sizeof(int));
    vector<int> vec1;
    int leader = arr[n-1];
    for(int i=n-1;i>-1;i--){
        if(arr[i]>=leader){
            leader = arr[i];
            vec1.push_back(leader);
        }
    }
    return vec1;
}



int main(int argc, char const *argv[])
{
    int arr[] = {7,10,4,3,6,5,2};
    vector<int> vec1;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0;i<n;i++){
        cout<<arr[i]<<" ";
    
    }
    cout<<endl;
    vec1 = solve(arr,n);
    cout<<endl;
    int i=0;
    int j=vec1.size()-1;
    for(int x = j;x>-1;x--){
        cout<<vec1[x]<<" ";
    }
    cout<<endl;
    return 0;
}



