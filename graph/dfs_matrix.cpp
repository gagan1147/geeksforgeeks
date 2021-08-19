#include<bits/stdc++.h>

using namespace std;

const int row = 5;
const int col = 5;

void add_edge(int matrix[row][col],int u,int v){
    matrix[u][v] = 1;
    matrix[v][u] = 1;
}

void dfs(int matrix[row][col],int source,bool visited[]){
    visited[source] = true;
    cout<<source<<" ";
    for(int i=0;i<col;i++){
        if(matrix[source][i] && (!visited[i])){
            dfs(matrix,i,visited);
        }
    }
}



int main(int argc, char const *argv[]){
    

    int matrix[row][col];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            matrix[i][j] = 0;
        }
    }
    add_edge(matrix,0,0);
    add_edge(matrix,0,1);
    add_edge(matrix,1,1);
    add_edge(matrix,2,3);
    add_edge(matrix,2,4);
    add_edge(matrix,3,3);
    add_edge(matrix,3,4);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    int count  = 0;
    bool visited[row] = {false};
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] && (!visited[i])){
                dfs(matrix,i,visited);
                count++;
            }
        }
    }
    
    cout<<endl;
    cout<<count;
    cout<<endl;



    return 0;
}
