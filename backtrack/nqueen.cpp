#include<bits/stdc++.h>

using namespace std;
const int N = 8;
int c = 0;
void printSolution(int board[N][N]) 
{ 
    for (int i = 0; i < N; i++) { 
        for (int j = 0; j < N; j++) 
            printf(" %d ", board[i][j]); 
        printf("\n"); 
    } 
} 
 

bool isSafe(int row,int col,int board[][N]){

    for(int i=0;i<col;i++){
        if(board[row][i]){
            return false;
        }
    }
    for(int i=row,j=col;i>-1 && j>-1; j--,i--){
        if(board[i][j]){
            return false;
        }
    }
    for(int i=row,j=col; i<N && j>-1;i++,j--){
        if(board[i][j]){
            return false;
        }
    }
    return true;
}


bool solve(int col,int board[][N]){
    if(col == N){
        return true;
    }
    for(int i=0;i<N;i++){
        if(isSafe(i,col,board)){
            board[i][col] = 1;
            if(solve(col+1,board)){
                // printSolution(board); 
                // printf("\n");
                // c++;
                return true;
            }
            board[i][col] = 0;
        }
    }
    return false;
}





int main(int argc, char const *argv[]){

    int board[N][N]={0};
    solve(0,board);
    //printSolution(board); 
    
    cout<<endl;
    cout<<c<<endl;

    return 0;
}
