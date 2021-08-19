#include<bits/stdc++.h>

using namespace std;

bool isSafe(string s,int l,int i,int r){
    if(l!=0 && s[l-1]=='A' && s[i]=='B'){
        return false;
    }
    if(r == (l+1) && s[i]=='A' && s[l]=='B'){
        return false;
    }
    return true;
}




void permute(string s,int l,int r){
    if(l==r){
        cout<<s<<endl;
        return;
    }
    for(int i=l;i<=r;i++){
        if(isSafe(s,l,i,r)){
            swap(s[i],s[l]);
            permute(s,l+1,r);
            swap(s[i],s[l]);
        }
    }
}

int main(int argc, char const *argv[]){


    string str = "ABC";
    permute(str,0,2);

    return 0;
}
