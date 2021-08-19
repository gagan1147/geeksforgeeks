#include<bits/stdc++.h>
#define CHAR 256
using namespace std;



int fact(int n){
    int mul = 1;
    for(int i=1;i<=n;i++){
        mul = ((mul )*(i )) ;
    }
    return mul;
}


int lex_rank(string &str){
   int n = str.length();
   int res = 1;
   int count[CHAR] = {0};
   int mul = fact(n);
   for(int i=0;i<n;i++){
       count[str[i]]++;  //count letter in count array
   }
   for(int i=0;i<CHAR;i++){
       if(count[i]>1){
           return 0;
       }
   }
   for(int i=1;i<CHAR;i++){
       count[i] += count[i-1]; //cummulative count
   }
   for(int i=0;i<n-1;i++){
       mul = mul/(n-i);
       res = ((res ) + ((((count[str[i]-1]) )*(mul))) ) ;
       for(int j=str[i];j<CHAR;j++){
           count[j]--; //Updating the count
       }
   }
   return res ;
}
int main(int argc, char const *argv[])
{
    string str = "dcba";
    cout<<lex_rank(str)<<endl;
    return 0;
}
