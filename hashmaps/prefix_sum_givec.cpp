#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {5,3,2,-1};
    int n = sizeof(arr)/sizeof(arr[0]);
    unordered_set<int> set1;
    int prefix_sum = 0;
    int sum = 4,res=0;
    for(int i:arr){
        prefix_sum += i;
        if(prefix_sum == sum){
            res = 1;
            break;
            
        }
        if(set1.count(prefix_sum-sum)==1){
            res = 1;
            break;
        }
        set1.insert(prefix_sum);
    }
    res?cout<<"Yes":cout<<"No";
    return 0;
}
