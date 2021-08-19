#include<bits/stdc++.h>

using namespace std;

void solve(int n, char a,char b,char c){
    if(n==0){
        return;
    }
    solve(n-1,a,c,b);
    cout<<a<<"->"<<c<<endl;
    solve(n-1,b,a,c);
}



int main(int argc, char const *argv[])
{
    solve(3,'a','b','c');
    return 0;
}
