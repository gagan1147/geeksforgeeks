#include<bits/stdc++.h>

using namespace std;


void addEdge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}


void dfsRec(vector<int> adj[],int source,bool visited[],stack<int> &s1){
    //cout<<source<<" ";
    visited[source] = true;
    for(int adjacent:adj[source]){
        if(!visited[adjacent]){
            dfsRec(adj,adjacent,visited,s1);
        }
    }
    s1.push(source);
}

void dfs(vector<int> adj[],int V){
    bool visited[V];
    stack<int> s1;
    for(int i=0;i<V;i++){
        visited[i] = false;
    }
    // for(int i=0;i<V;i++){
    //     if(!visited[i]){
    //         dfsRec(adj,i,visited);
    //     }
    // }
    dfsRec(adj,1,visited,s1);
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    cout<<endl;
}

int main(int argc, char const *argv[]){


    int V = 5;
    vector<int> adj[V];
    addEdge(adj,0,1);
    addEdge(adj,1,2);
    addEdge(adj,2,0);
    addEdge(adj,1,3);
    addEdge(adj,3,4);
    dfs(adj,V);

    return 0;
}
