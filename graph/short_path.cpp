#include<bits/stdc++.h>

using namespace std;

void insert_node(vector<int> adj[],int v,int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

void shortest_path(vector<int> adj[],int v,int source){

    bool visited[v] = {false};
    int dist[v];
    for(int i=0;i<v;i++){
        dist[i] = INT16_MAX;
    }

    queue<int> q1;
    dist[source] = 0;
    q1.push(source);
    visited[source] = true;
    while(!q1.empty()){
        int u = q1.front();
        q1.pop();
        for(int x:adj[u]){
            if(!visited[x]){
                dist[x] = dist[u] + 1;
                visited[x] = true;
                q1.push(x);
            }
        }
    }
    for(int x:dist){
        cout<<x<<" ";
    }
    cout<<endl;
}



int main(int argc, char const *argv[]){

    int v = 4;
    vector<int> adj[v];
    insert_node(adj,0,1);
    insert_node(adj,0,2);
    insert_node(adj,1,2);
    insert_node(adj,1,3);
    insert_node(adj,2,3);
    shortest_path(adj,v,0);
    return 0;
}
