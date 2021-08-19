#include<bits/stdc++.h>

using namespace std;

void reverse_str(string &s,int start,int end){
    while(start<=end){
        swap(s[start++],s[end--]);
    }
}
void reverse_sentence(string &s){
    int n = s.length(),start=0;
    for(int end=0;end<n;end++){
        if(s[end] == ' '){
            reverse_str(s,start,end-1);
            start = end+1;
        }
    }
    reverse_str(s,start,n-1);
    reverse_str(s,0,n-1);
}

int main(int argc, char const *argv[])
{
    string s;
    getline(cin,s);
    cout<<s<<endl;
    //reverse_str(s,0,s.length()-1);
    reverse_sentence(s);
    cout<<s<<endl;
    return 0;
}
