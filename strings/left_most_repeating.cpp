#include<bits/stdc++.h>
using namespace std;



int main(int argc, char const *argv[])
{
    int alpha[26]= {0};
    string str = "geeksforgeeks";
    for(int i=0;i<str.length();i++){
        alpha[str[i]-'a']++;
    }
    int i;
     for(i=0;i<str.length();i++){
        if(alpha[str[i]-'a'] >1){
            break;
        }
    }
    cout<<str[i]<<" : "<<alpha[str[i]-'a']<<endl;
    return 0;
}
