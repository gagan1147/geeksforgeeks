#include<bits/stdc++.h>

using namespace std;

int naive(int arr[],int n){
    int res = 0;
    
    for(int i=0;i<n;i++){
        int count_0=0,count_1=0;    
        for(int j=i;j<n;j++){
            if(arr[j]){
                count_1++;
            }
            else{
                count_0++;
            }
            if(count_0 == count_1){
                res = max(res,count_0+count_1);
            }
            
        }
    }
    return res;
}

int efficient(int arr[],int n){
    int sum = 0;
    for(int i=0;i<n;i++){
        if(!arr[i]){
            arr[i] = -1;
        }
    }
    unordered_map<int,int> map1;
    int prefix_sum = 0,res=0;
    for(int i=0;i<n;i++){
        prefix_sum += arr[i];
        if(prefix_sum == sum){
            res  =i+1;
        }
        if(map1.count(prefix_sum)==0){
            map1.insert({prefix_sum,i});
        }
        if(map1.count(prefix_sum-sum)==1){
            res = max(res,i-map1[prefix_sum-sum]);
        }

    }
    return res;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,1,1,0,1,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<naive(arr,n)<<endl;    
    cout<<efficient(arr,n)<<endl;    
    return 0;
}
