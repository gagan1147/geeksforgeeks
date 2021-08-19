#include<bits/stdc++.h>

using namespace std;

void solve(string &txt,string &pat,int txt_len,int pat_len){

    for(int i = 0;i<=txt_len-pat_len ;i++){
        int j;
        for(j=0;j<pat_len;j++){
            if(txt[i+j] != pat[j]){
                break;
            }
        }
        if(j==pat_len){
            cout<<i<<" ";
        }
    }
}


int main(int argc, char const *argv[])
{
    string txt = "ABABABCD";
    string pat = "ABAB";
    int txt_len = txt.length();
    int pat_len = pat.length();
    solve(txt,pat,txt_len,pat_len);
    cout<<endl;
    return 0;
}
