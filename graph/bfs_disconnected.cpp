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
       int u = q1.front();
       q1.pop();
       cout<<u<<" ";
       for(int x:adj[u]){
           if(!visited[x]){
               visited[x] = true;
               q1.push(x);
           }
       }
   }
}

void bfsDist(vector<int> adj[],int v){

    bool visited[v];
    for(int i=0;i<v;i++){
        visited[i] = false;
    }
    for(int i=0;i<v;i++){
        if(!visited[i]){
            bfs(adj,i,visited);
        }
    }
}




int main(int argc, char const *argv[]){
    

    int v = 7;
    vector<int> adj[v];
    insert_node(adj,0,1);
    insert_node(adj,0,2);
    insert_node(adj,2,3);
    insert_node(adj,1,3);
    insert_node(adj,4,5);
    insert_node(adj,4,6);
    bfsDist(adj,v);

    return 0;
}
