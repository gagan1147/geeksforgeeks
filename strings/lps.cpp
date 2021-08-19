#include<bits/stdc++.h>

using namespace std;


int longproperPrefix(string &s,int n){
    for(int len=n-1;len>0;len--){
        bool flag=true;
        for(int i=0;i<len;i++){
            if(s[i] != s[n-len+i]){
                flag = false;
            }
        }
        if(flag){
            return len;
        }
    }
    return 0;
}
void fillLps(string &s,int *lps){
    for(int i=0;i<s.length();i++){
        lps[i] = longproperPrefix(s,i+1);
    }
}

void efficient(string &s,int lps[]){
    int n = s.length();
    int i=1;
    int len = 0;
    lps[0] = 0;
    while(i<n){
        if(s[i] == s[len]){
            lps[i] = len+1;
            len++;
            i++;
        }
        else{
            if(!len){
                lps[i] = 0;
                i++;
            }
            else{
                len = lps[len-1];
            }
        }
    }
}


int main(int argc, char const *argv[])
{
    string s = "abacabad";
    int lps[s.length()];
    int lps2[s.length()];
    fillLps(s,lps);
    efficient(s,lps2);

    for(int i=0;i<s.length();i++){
        cout<<lps[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<s.length();i++){
        cout<<lps2[i]<<" ";
    }
    cout<<endl;
    return 0;
}
