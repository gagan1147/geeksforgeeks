
#include<bits/stdc++.h>

using namespace std;

string concatenatedString(string s1, string s2) {
    int alpha = 256;
    int count_s1[alpha] = {0};
    int count_s2[alpha] = {0};
    int len_s1 = s1.length();
    int len_s2 = s2.length();
    for(int i=0;i<len_s1;i++){
        count_s1[s1[i]] = 1;
    }
    for(int i=0;i<len_s2;i++){
        count_s2[s2[i]] = 1;
    }
    for(int i=0;i<alpha;i++){
        if(count_s1[i] && count_s2[i]){
            count_s1[i] = 0;
            count_s2[i] = 0;
        }
    }
    /*
    for(int i=0;i<alpha;i++){
        if(count_s1[i]){
            cout<<(char)i<<" ";
        }
        if(count_s2[i]){
            cout<<(char)i<<" ";
        }
    }
    */
    cout<<endl;
    //cout<<count_s1[s1[0]]<<endl;
    
    string res = "";
    for(int i=0;i<len_s1;i++){
        if(count_s1[s1[i]]==1){
            res = res + s1[i];
        }
    }
    for(int i=0;i<len_s2;i++){
        if(count_s2[s2[i]]==1){
            res = res + s2[i];
        }
    }
    return res;
}


int main(int argc, char const *argv[])
{
    string s1 = "aacdb";
    string s2 = "gafd";
    cout<<concatenatedString(s1,s2)<<endl;
    return 0;
}
