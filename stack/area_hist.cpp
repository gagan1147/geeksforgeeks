#include<bits/stdc++.h>

using namespace std;

int naive(int arr[],int n){
    
    int res = 0;
    for(int i=0;i<n;i++){
        int curr = arr[i];
        for(int j=i-1;j>-1;j--){
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<n;j++){
            if(arr[j]>=arr[i]){
                curr += arr[i];
            }
            else{
                break;
            }
        }
        res = max(res,curr);
    }
    return res;
}

int efficient(int arr[],int n){
    int res = 0;
    int ps[n],ns[n];
    stack<int> s1;
    s1.push(0);
    
    for(int i=0;i<n;i++){
        while(!s1.empty() && arr[s1.top()]>=arr[i]){
            s1.pop();
        }
        int res = s1.empty()?-1:s1.top();
        ps[i] = res;
        s1.push(i);
    }
    //cout<<endl;
    while(!s1.empty()){
        s1.pop();
    }
    s1.push(n-1);
    for(int i = n-1;i>-1;i--){
        while(!s1.empty() && arr[s1.top()]>=arr[i]){
            s1.pop();
        }
        int res = s1.empty()?n:s1.top();
        ns[i] = res;
        s1.push(i);
    }
    for(int i=0;i<n;i++){
        cout<<ps[i]<<" ";
    }
    cout<<endl;
     for(int i=0;i<n;i++){
        cout<<ns[i]<<" ";
    }
    //cout<<endl;
    for(int i=0;i<n;i++){
        int curr = arr[i];
        curr += (i-ps[i]-1)*arr[i];
        curr += (ns[i]-i-1)*arr[i];
        res = max(res,curr);
    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr[] = {6,2,5,4,1,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int res = naive(arr,n);
    cout<<res<<endl;
    res = efficient(arr,n);
    cout<<endl;
    cout<<res<<endl;
    
    return 0;
}


