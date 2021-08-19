#include<bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    string str1 = "silent";
    string str2 = "listan";
    int len = str1.length();
    int alpha[26] = {0};
    for(int i=0;i<26;i++){
        alpha[str1[i]-'a']++;
        alpha[str2[i]-'a']--;
    }
    int res= 1;
    for(int i=0;i<26;i++){
        if(alpha[i] !=0){
            res=0;
            break;
        }
    }
    (res)?cout<<"Yes":cout<<"No";
    cout<<endl;
    return 0;
}
