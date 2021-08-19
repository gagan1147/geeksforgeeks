#include<bits/stdc++.h>

using namespace std;




int main(int argc, char const *argv[])
{
    int arr[] = {5, 3, 9, -4, -6, 7, -1};
    int n = sizeof(arr)/sizeof(arr[0]);  
    int prefix_sum = 0;
    unordered_set<int> set1;
    for(int i:arr){
        prefix_sum += i;
        if(set1.count(prefix_sum) == 1){
            cout<<"Yes"<<endl;
            break;
        }
        set1.insert(prefix_sum);
    }  
    cout<<"No"<<endl;
    return 0;
}
