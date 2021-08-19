#include<bits/stdc++.h>

using namespace std;

vector<string> vec1;

string kth_bit(int num,int k){
    if((num>>(k-1))&1 == 1){
        return "Yes";
    }
    else{
        return "No";
    }
}

int main(int argc, char const *argv[])
{
    int num=13,k=2;
    cout<<kth_bit(num,k)<<endl;
    return 0;
}
