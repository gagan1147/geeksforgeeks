#include<bits/stdc++.h>
using namespace std;

const int N = 4;
int grid[N][N] = {{1,0,3,0},{0,0,2,1},{0,1,0,2},{2,4,0,0}};

bool isSafe(int i,int j,int n){
    for(int k=0;k<N;k++){
        if(grid[i][k]==n || grid[k][j]==n){
            return false;
        }
    }
    int s = sqrt(N);
    int rs = i-i%s;
    int cs = j-j%s;
    for(int i=0;i<s;i++){
        for(int j=0;j<s;j++){
            if(grid[i+rs][j+cs] == n){
                return false;
            }
        }
    }
    return true;
}



bool solve(){
    int i,j,bre=0;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            if(!grid[i][j]){
                bre = 1;
                break;
            }
        }
        if(bre){
            break;
        }
    }
    if(i==N && j==N){
        return true;
    }
    for(int n=1;n<=N;n++){
        if(isSafe(i,j,n)){
            grid[i][j] = n;
            if(solve()){
                return true;
            }
            grid[i][j] = 0;
        }
    }
    return false;
}

void printGrid(){
    int i,j;
    for(i=0;i<N;i++){
        for(j=0;j<N;j++){
            cout<<grid[i][j]<<" ";
        }
        cout<<endl;
    }
}


int main(int argc, char const *argv[]){
    

    printGrid();
    solve();
    printGrid();
    return 0;
}
