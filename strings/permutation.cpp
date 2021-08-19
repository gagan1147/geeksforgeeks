#include<bits/stdc++.h>

using namespace std;


void permute(string str,int l,int r){
    if(l==r){
        cout<<str<<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            swap(str[i],str[l]);
            permute(str,l+1,r);
            swap(str[i],str[l]);
        }
    }
}



int main(int argc, char const *argv[])
{
    string str = "ABC";
    int n = str.length();
    permute(str,0,n-1);
    return 0;
}
