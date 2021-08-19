#include<bits/stdc++.h>

using namespace std;

void subset(string s,string curr="",int i=0){
    if(i==s.length()){
        cout<<curr<<"\n";
        return;
    }
    subset(s,curr,i+1);
    subset(s,curr+s[i],i+1);
}
int main(int argc, char const *argv[])
{
    string s="abc";
    subset(s);
    return 0;
}
