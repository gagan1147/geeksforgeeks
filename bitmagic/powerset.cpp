#include<bits/stdc++.h>

using namespace std;

void printpowerset(string str){
    int n = str.length();
    int size = pow(2,n);
    for(int count = 0 ;count<size;count++){
        for(int j=0;j<n;j++){
            if((count &(1<<j))!=0){
                cout<<str[j];
            }
        }
        cout<<endl;
    }
}

//TC O(n*2^n)

int main(int argc, char const *argv[])
{
    printpowerset("abc");
    return 0;
}
