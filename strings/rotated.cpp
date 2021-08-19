
#include<bits/stdc++.h>

using namespace std;

bool isRotated(string txt, string pat){
    if (txt.length() != pat.length()){
        return false;
    }
    if(txt.length()<2){
      return txt.compare(pat) == 0;
    }
    string clk = "";
    string anti = "";
    int len = pat.length();
 

    anti = anti +pat.substr(len-2, 2) +pat.substr(0, len-2) ;
 

    clk = clk +pat.substr(2) + pat.substr(0, 2) ;
 

    return (txt.compare(clk) == 0 || txt.compare(anti) == 0);
}

int main(){
    string S = "geeksforgeeks";
    string P = "geeksgeeksfor";
    
    cout<<isRotated(S,P)<<endl;
    return 0;
}