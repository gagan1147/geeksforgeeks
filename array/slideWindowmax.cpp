
#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& arr, int k) {
    deque<int>q;
    vector<int>res;
    for(int i=0;i<nums.size();i++)
    {
        while(!q.empty()&&nums[i]>=nums[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
        while(q.front()<=i-k)
        {
            q.pop_front();
        }
        if(i>=k-1)
        {
            res.push_back(nums[q.front()]);
        }
    }
    return res;

}

int main(int argc, char const *argv[]){
    

    vector<int> nums = {1,3,-1,-3,5,3,6,7};
    int k = 3;
    vector<int> res = maxSlidingWindow(nums,k);
    for(int x:res){
        cout<<x<<" ";
    }
    cout<<endl;
    return 0;
}
