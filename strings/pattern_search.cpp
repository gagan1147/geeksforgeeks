

#include<bits/stdc++.h>

using namespace std;



bool search(string pat, string txt) { 
    int pat_len = pat.length();
    int txt_len = txt.length();

    int i=0,j=0;
    while(i<txt_len){
        if(pat[j] == txt[i]){
        
            j++;
        }
        else if(pat[j] != txt[i]){
            j=0;
        }
        if(pat_len==j){
            return true;
        }

        i++;
    }
    return false;

} 

int main(){
    string S = "geeksforgeeks";
    string P = "geeksgeeksfor";

    
    cout<<search(P,S)<<endl;
    return 0;
}