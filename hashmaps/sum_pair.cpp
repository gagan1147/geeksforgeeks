#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int arr[] = {8,3,2,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum= 121;
    unordered_set<int> set1;
    int found = 0;
    for(int i=0;i<n;i++){
        if (set1.count(sum-arr[i]) == 1){
            found = 1;
        }
        else{
            set1.insert(arr[i]);
        }
    }
    (found)?cout<<"Found":cout<<"Not Found";
    cout<<endl;
    return 0;
}
