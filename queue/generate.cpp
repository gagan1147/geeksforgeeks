#include<bits/stdc++.h>

using namespace std;


int main(int argc, char const *argv[])
{
    queue<string> q1;

    q1.push("5");
    q1.push("6");
    int n = 5*2,count=0;
    while(count++ != n){
        string curr = q1.front();
        cout<<curr<<endl;
        q1.pop();
        q1.push(curr+"5");
        q1.push(curr+"6");
    }
    return 0;
}
