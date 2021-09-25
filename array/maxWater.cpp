/*
Given n non-negative integers a1, a2, ..., an , where each represents a point at coordinate (i, ai).
n vertical lines are drawn such that the two endpoints of the line i is at (i, ai) and (i, 0).
Find two lines, which, together with the x-axis forms a container, such that the container contains the most water.
*/

#include<bits/stdc++.h>

using namespace std;

//   op->49

int main(int argc, char const *argv[]){

    int arr[] = {1,8,6,2,5,4,8,3,7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int i=0,j=n-1,res=0;
    while(i<=j){
        res = max(res,((j-i)*(min(arr[j],arr[i]))));
        if(arr[i]<arr[j]){
            i++;
        }
        else{
            j--;
        }
    }
    cout<<res<<endl;
    return 0;
}
