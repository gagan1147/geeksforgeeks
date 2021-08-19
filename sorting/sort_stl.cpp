#include<bits/stdc++.h>
#include<algorithm>

using namespace std;
struct point
{
    int x,y;
};

bool mycmp(point p1,point p2){
    return p1.y < p2.y;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1,0,7,3,4,2,5,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    point arr2[] = {{3,10},{2,8},{5,4}};
    int nn = sizeof(arr2)/sizeof(arr2[0]);

    cout<<nn<<endl;
    sort(arr,arr+n);
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr,arr+n,greater<int>());
    for(int x:arr){
        cout<<x<<" ";
    }
    cout<<endl;
    sort(arr2,arr2+nn,mycmp);
    for(auto i:arr2){
        cout<<i.x<<" "<<i.y<<endl;
    }
    vector<pair<string,int>>  vec1;
    vec1.push_back({"a",1});
    return 0;
}
