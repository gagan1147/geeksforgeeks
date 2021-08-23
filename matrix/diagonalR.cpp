/*
1,2,3,4
5,6,7,8
9,10,11,12
13,14,15,16
*/
//o/p [ 4 3 8 12 7 2 1 6 11 16 15 10 5 9 14 13]
/* o/p [(0,3) 
       (0,2),(1,3)
       (2,3),(1,2),(0,1)
       (0,0),(1,1),(2,2),(3,3)
*/
#include<bits/stdc++.h>
using namespace std;

const int N = 4;


void solve(int matrix[][N]){
    int n = N-1;
    bool flag = false;
    while(n>-N){
        stack<int> s1;
        if(flag){
            for(int i=0;i<N;i++){
                for(int j=0;j<N;j++){
                    if(j-i == n){
                        cout<<matrix[i][j]<<" ";
                    }
                }
            }
        }
        else{
            for(int i=N-1;i>-1;i--){
                for(int j=N-1;j>-1;j--){
                    if(j-i == n){
                    //s1.push(matrix[i][j]);
                        cout<<matrix[i][j]<<" ";
                    }
                }
            }
        }
        while(!s1.empty()){
            cout<<s1.top()<<" ";
            s1.pop();
        }
        flag = !flag;
        cout<<endl;
        n--;
    }
}



int main(int argc, char const *argv[]){
    int matrix[N][N] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
    solve(matrix);
    return 0;
}
