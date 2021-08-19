#include<bits/stdc++.h>

using namespace std;

const int row = 5;
const int col = 5;

void add_edge(int matrix[row][col],int u,int v){
    matrix[u][v] = 1;
    matrix[v][u] = 1;
}

void bfs(int matrix[row][col],int source,bool visited[]){
    visited[source] = true;
    queue<int> q1;
    q1.push(source);
    int ee;
    while(!q1.empty()){
        ee = q1.front();
        q1.pop();
        cout<<ee<<" ";
        for(int i=0;i<col;i++){
            if(matrix[ee][i] && (!visited[i])){
                visited[i] = true;
                q1.push(i);
            }
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
    int count  = 0;
    bool visited[row] = {false};
    add_edge(matrix,0,0);
    add_edge(matrix,0,1);
    add_edge(matrix,1,1);
    add_edge(matrix,2,3);
    add_edge(matrix,2,4);
    add_edge(matrix,3,3);
    add_edge(matrix,3,4);
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] && (!visited[i])){
                bfs(matrix,i,visited);
                count++;
            }
        }
    }
    cout<<endl;
    cout<<count;
    cout<<endl;
    return 0;
}
