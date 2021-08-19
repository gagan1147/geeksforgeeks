#include<bits/stdc++.h>

using namespace std;


void naive(int arr[],int n){

    for(int i=0;i<n;i++){
        int span = 1;
        for(int j=i-1 ; j>-1 && arr[j]<=arr[i];j--){
            span++;
        }
        cout<<span<<" ";
    }

}

void efficient(int arr[],int n){
    stack<int> s1;
    s1.push(0);
    cout<<1<<" ";
    for(int i=1;i<n;i++){
        while(!s1.empty() && arr[s1.top()]<=arr[i]){
            s1.pop();
        }
        int span = s1.empty()?i+1:i-s1.top();
        cout<<span<<" ";
        s1.push(i);
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {18,12,13,14,11,16};
    int n = sizeof(arr)/sizeof(arr[0]);
    naive(arr,n);
    cout<<endl;
    efficient(arr,n);
    cout<<endl;
    return 0;
}
