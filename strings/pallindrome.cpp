#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str = "abaabbaaba";
    int res = 1;
    int i=0,j=str.length()-1;
    
    
    while(i<=j){
        if(str[i] != str[j]){
            res=0;
            break;
            
        }
        i++;
        j--;
    }
    (res)?cout<<"Yes":cout<<"No";
    cout<<endl;
    return 0;
}
