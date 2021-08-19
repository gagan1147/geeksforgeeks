#include<bits/stdc++.h>

using namespace std;

void reverse_queue(queue<int> &q1){
    if(q1.empty()){
        return;
    }
    int x = q1.front();
    q1.pop();
    reverse_queue(q1);
    q1.push(x);
}


int main(int argc, char const *argv[])
{

    int arr[] = {1,2,3,4,5,6};
    int n = 5;
    queue<int> q1;
    for(int i=0;i<n;i++){
        q1.push(arr[i]);
    }
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        q1.push(arr[i]);
    }
    reverse_queue(q1);
    while(!q1.empty()){
        cout<<q1.front()<<" ";
        q1.pop();
    }
    cout<<endl;
    return 0;
}
