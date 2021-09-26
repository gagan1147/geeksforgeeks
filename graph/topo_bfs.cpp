#include<bits/stdc++.h>

using namespace std;


void add_edge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}

void bfs(vector<int> adj[],int v){
    
    int in_degree[v] = {0};
    for (int u = 0; u < v; u++) { 
        for (int x:adj[u]) 
            in_degree[x]++; 
    } 
    
    queue<int> q1;
    for(int i=0;i<v;i++){
        if(!in_degree[i]){
            q1.push(i);
        }
    }

    while(!q1.empty()){
        int u = q1.front();
        cout<<u<<" ";
        q1.pop();
        for(int adjacent:adj[u]){
            in_degree[adjacent]--;
            if(!in_degree[adjacent]){
                q1.push(adjacent);
            }
        }
    }
}


int main(int argc, char const *argv[]){
    
    int v = 5;
    vector<int> adj[v];
    
    add_edge(adj,0,2);
    add_edge(adj,0,3);
    add_edge(adj,1,3);
    add_edge(adj,1,4);
    add_edge(adj,2,3);
    bfs(adj,v);

    return 0;
}
