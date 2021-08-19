#include<bits/stdc++.h>

using namespace std;


int minCoinCount(vector<int> arr,int amount){
    int n = arr.size();
    sort(arr.begin(),arr.end(),greater<int>());
    int res = 0;
    int count;
    for(int i=0;i<n;i++){
        if(arr[i]<=amount){
            count = amount/arr[i];
            res = res + count;
            amount = amount - count*arr[i];
        }
        if(amount == 0){
            return res;
        }
    }
    return -1;
}



int main(int argc, char const *argv[]){
    
    vector<int> arr = {10,5,2,1};
    cout<<minCoinCount(arr,52)<<endl;

    return 0;
}
