#include<bits/stdc++.h>
#define MAX 1000
using namespace std;


int sequence[MAX];



int main(int argc, char const *argv[]){
    

    for(int i=0;i<MAX;i++){
        sequence[i] = 0;
    }
    for(int i=0;i<MAX;i++){
        for(int j=i-1;j>-1;j--){
            if(sequence[i] == sequence[j]){
                sequence[i+1] = i-j;
                break;
            }
        }
    }
    while(true){
        int num;
        cin>>num;
        cout<<sequence[num]<<endl;
    }

    return 0;
}
