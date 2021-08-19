#include<bits/stdc++.h>

using namespace std;
const int N = 4;
bool maze[N][N] = {{1,0,0,0},{1,1,0,1},{0,1,0,0},{1,1,1,1}};
bool sol[N][N];


bool isSafe(int i,int j){
    return (i<N && j<N && maze[i][j] == 1);
}


bool solveMaze(int i,int j){
    if(i==N-1 && j==N-1){
        sol[i][j] = 1;
        return true;
    }
    if(isSafe(i,j)){
        sol[i][j] = 1;
        if(solveMaze(i+1,j)){
            return true;
        }
        else if(solveMaze(i,j+1)){
            return true;
        }
        sol[i][j] = 0;
    }
    return false;
}



int main(int argc, char const *argv[]){
    
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            sol[i][j] = 0; 
        }
    }

    if(solveMaze(0,0)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;

    return 0;
}
