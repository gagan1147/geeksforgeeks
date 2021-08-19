#include<bits/stdc++.h>

using namespace std;

void efficient(int arr[],int n){
    stack<int> s1;
    s1.push(arr[0]);
    cout<<-1<<" ";
    for(int i=1;i<n;i++){
        while(!s1.empty() && s1.top()<=arr[i]){
            s1.pop();
        }
        int res = s1.empty()?-1:s1.top();
        cout<<res<<" ";
        s1.push(arr[i]);
    }

}


int main(int argc, char const *argv[])
{
    int arr[] = {6,2,5,4,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    efficient(arr,n);
    cout<<endl;
    return 0;
}
