#include<bits/stdc++.h>

using namespace std;

int square_root(int num){
    int left = 1,right = num,ans = -1;
    while(left<right){
        int mid = (left+right)/2;
        int msq = mid*mid;
        if(msq==num){
            return mid;
        }
        if (mid <= num / mid) {
            left = mid + 1;
            ans = mid;
        }
        else // If mid*mid is greater than x
            right = mid - 1;
    }
    return ans;
}



int main(int argc, char const *argv[])
{
    cout<<square_root(6179767)<<endl;
    return 0;
}
