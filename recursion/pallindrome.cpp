#include<bits/stdc++.h>

using namespace std;

bool isPallin(string str,int start,int end){
    if(start>=end){
        return true;
    }
    return (str[start] == str[end]) && isPallin(str,start+1,end-1);
}

int main(int argc, char const *argv[])
{
    string str = "abba";
    int start = 0;
    int end = str.length();
    cout<<isPallin(str,start,end-1);
    return 0;
}
