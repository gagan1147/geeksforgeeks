#include<bits/stdc++.h>

using namespace std;



void insert_node(vector<int> adj[],int u,int v){

    adj[u].push_back(v);
    adj[v].push_back(u);
}


void print_dfs(vector<int> adj[],int source,bool visited[]){

    visited[source] = true;
    cout<<source<<" ";
    for(int x:adj[source]){
        if(!visited[x]){
            print_dfs(adj,x,visited);
        }
    }
}


int main(int argc, char const *argv[]){
    
    
    
    int v = 6;
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    vector<int> adj[v];
    insert_node(adj,0,1);
    insert_node(adj,0,2);
    insert_node(adj,1,3);
    insert_node(adj,1,4);
    insert_node(adj,2,3);
    insert_node(adj,4,5);
    print_dfs(adj,0,visited);
    return 0;
}
