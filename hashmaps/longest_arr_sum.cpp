#include<bits/stdc++.h>

using namespace std;

int naive(int arr[],int n,int sum){
    int res = 0;
    for(int i=0;i<n;i++){
        int curr_sum = 0;
        for(int j=i;j<n;j++){
            curr_sum += arr[j];
            if(curr_sum==sum){
                res = max(res,j-i+1);
            }
        }
    }
    return res;
}
int efficient(int arr[],int n,int sum){
    int res = 0,prefix_sum=0;
    unordered_map<int,int> map1;
    for(int i=0;i<n;i++){
        prefix_sum += arr[i];
        if(prefix_sum == sum){
            res = i+1;
        }
        if(map1.count(prefix_sum) == 0){
            map1.insert({prefix_sum,i});
        }
        if(map1.count(prefix_sum-sum) == 1){
            res = max(res,i-map1[prefix_sum-sum]);
        }
    }
    return res;
}



int main(int argc, char const *argv[])
{
    int arr[] = {5,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 5;
    cout<<naive(arr,n,sum)<<endl;
    cout<<efficient(arr,n,sum)<<endl;
    return 0;
}
