#include<bits/stdc++.h>

using namespace std;

void insert_node(vector<int> adj[],int u,int v){

    adj[u].push_back(v);
    adj[v].push_back(u);
}


void bfs(vector<int> adj[],int source,bool visited[]){
    queue<int> q1;
    q1.push(source);
    visited[source] = true;
    while(!q1.empty()){
        int edge = q1.front();
        q1.pop();
        for(int adjacent:adj[edge]){
            if(!visited[adjacent]){
                visited[adjacent] = true;
                q1.push(adjacent);
            }
        }
    }
}


void count_graph(vector<int> adj[],int v){
    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    int count = 0;
    for(int i=0;i<v;i++){
        if(!visited[i]){
            bfs(adj,i,visited);
            count++;
        }
    }
    cout<<count<<endl;
}

int main(int argc, char const *argv[]){
    

    int v = 9;
    vector<int> adj[v];
    insert_node(adj,0,1);
    insert_node(adj,0,2);
    insert_node(adj,1,2);

    insert_node(adj,3,4);


    insert_node(adj,5,6);
    insert_node(adj,5,7);
    insert_node(adj,7,8);
    count_graph(adj,v);
    

    return 0;
}
