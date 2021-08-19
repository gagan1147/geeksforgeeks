#include<bits/stdc++.h>

using namespace std;


struct interval{
    int start,end;
};

bool mycomp(struct interval i1,struct interval i2){
    return i1.start<i2.start;
}
void solve(struct interval arr[],int n){
    int res = 0;
    sort(arr,arr+n,mycomp);
    for(int i=1;i<n;i++){
        if (arr[res].end >= arr[i].start){
            arr[res].start = min(arr[res].start,arr[i].start);
            arr[res].end = max(arr[res].end,arr[i].end);
        }
        else{
            res++;
            arr[res] = arr[i];
        }
    }
    for(int i=0;i<=res;i++){
        cout<<arr[i].start<<" "<<arr[i].end<<endl;
    }
    //return res;
}

int main(int argc, char const *argv[])
{
    struct interval arr[] = {{5,10},{3,15},{18,30},{2,7}};
    int n = 4;
    solve(arr,n);
    return 0;
}
