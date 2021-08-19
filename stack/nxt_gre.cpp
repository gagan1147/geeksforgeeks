#include<bits/stdc++.h>

using namespace std;

vector<int> efficient(int arr[],int n){
    stack<int> s1;
    s1.push(arr[n-1]);
    //cout<<-1<<" ";
    vector<int> temp;
    temp.push_back(-1);
    for(int i=n-2;i>-1;i--){
        while(!s1.empty() && s1.top()<=arr[i]){
            s1.pop();
        }
        int res = s1.empty()?-1:s1.top();
        temp.push_back(res);
        s1.push(arr[i]);
    }
    return temp;
}


int main(int argc, char const *argv[])
{
    int arr[] = {5,15,10,8,6,12,9,18};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int> temp = efficient(arr,n);
    for(int i=n-1;i>=0;i--){
        cout<<temp[i]<<" ";
    }
    cout<<endl;
    return 0;
}
