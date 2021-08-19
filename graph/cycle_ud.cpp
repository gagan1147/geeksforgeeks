#include<bits/stdc++.h>

using namespace std;

void insert_node(vector<int> adj[],int v,int u){
    adj[v].push_back(u);
    adj[u].push_back(v);
}

bool dfsrec(vector<int> adj[],int source,bool visited[],int parent){

    visited[source] = true;
    for(int adjacent:adj[source]){
        if(!visited[adjacent]){
            if(dfsrec(adj,adjacent,visited,source)){
                return true;
            }
        }
        else if(adjacent!=parent){
            return true;
        }
    }
    return false;
}

bool dfs(vector<int> adj[],int v){

    bool visited[v] = {false};
    for(int i=0;i<v;i++){
        if(!visited[i]){
            if(dfsrec(adj,i,visited,-1)){
                return true;
            }
        }
    }
    return false;
}






int main(int argc, char const *argv[]){

    int V=6;
	vector<int> adj[V];
	insert_node(adj,0,1); 
	insert_node(adj,1,2); 
	insert_node(adj,2,4); 
	insert_node(adj,4,5); 
	insert_node(adj,1,3);
	insert_node(adj,2,3);

	if(dfs(adj,V))
	    cout<<"Cycle found";
	else
	    cout<<"No cycle found";
    cout<<endl;
    return 0;
}
