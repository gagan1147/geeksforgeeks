#include<bits/stdc++.h>

using namespace std;


void add_edge(vector<int> adj[],int u,int v){
    adj[u].push_back(v);
}

bool dfs(vector<int> adj[],int source,bool visited[],bool reStack[]){
    visited[source] = true;
    reStack[source] = true;
    for(int adjacent:adj[source]){
        if(!visited[adjacent] && dfs(adj,adjacent,visited,reStack)){
            return true;
        }
        else if(reStack[adjacent]){
            return true;
        }
    }
    reStack[source] = false;
    return false;
}

bool dfsrec(vector<int> adj[],int v){
    bool reStack[v] = {false};
    bool visited[v] = {false};
    
    for(int i=0;i<v;i++){
        if(!visited[i]){
            if(dfs(adj,i,visited,reStack)){
                return true;
            }
        }
    }
    return false;
}



int main(int argc, char const *argv[]){
    
    int v = 6;
    vector<int> adj[v];
    add_edge(adj,0,1);
    add_edge(adj,2,1);
    add_edge(adj,2,3);
    add_edge(adj,3,4);
    add_edge(adj,4,5);
    add_edge(adj,5,3);
    /*
    0->1<-2->3->4->5->3
    */

    if(dfsrec(adj,v)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    cout<<endl;
    return 0;
}
