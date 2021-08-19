#include<bits/stdc++.h>

using namespace std;

const int row = 4;
const int col = 5;


int largestArea(int arr[],int n){
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
    while(!s1.empty()){
        s1.pop();
    }
    s1.push(n-1);
    for(int i=n-1;i>-1;i--){
        while(!s1.empty() && arr[s1.top()]>=arr[i]){
            s1.pop();
        }
        int res  = s1.empty()?n:s1.top();
        ns[i] = res;
        s1.push(i);
    }
    for(int i=0;i<n;i++){
        int curr = arr[i];
        curr += (i-ps[i]-1)*arr[i];
        curr += (ns[i]-i-1)*arr[i];
        res = max(curr,res);
    }
    return res;
}

int maxRectangle(int matrix[row][col]){

    int res = largestArea(matrix[0],col);
    //cout<<res<<endl;
    for(int i=1;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == 1){
                matrix[i][j] += matrix[i-1][j]; 
            }
        }
        res = max(res,largestArea(matrix[i],col));
    }
    return res;


}


int main(int argc, char const *argv[])
{
    int matrix[row][col] = {{1,0,0,1,1},{0,0,0,1,1},{1,1,1,1,1},{0,1,1,1,1}};
    // int arr[] = {6,2,5,4,1,5,6};
    // int n = sizeof(arr)/sizeof(arr[0]);
    // cout<<largestArea(arr,n)<<endl;
    int res = maxRectangle(matrix);
    cout<<res<<endl;
    return 0;
}
