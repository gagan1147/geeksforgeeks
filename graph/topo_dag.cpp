#include<bits/stdc++.h>

using namespace std;

const int V = 6;
void add_edge(vector<int> adj[],int u,int v,int weight[V][V],int weig,int indegree[]){

    adj[u].push_back(v);
    weight[u][v] = weig;
    indegree[v]++;
}

void solve(vector<int> adj[],int source,int indegree[],int weight[V][V]){
    queue<int> q1;
    vector<int> topo_ans;
    for(int i=0;i<V;i++){
        if(!indegree[i]){
            q1.push(i);
        }
    }
   
    while(!q1.empty()){
        int u = q1.front();
        topo_ans.push_back(u);
        q1.pop();
        for(int x:adj[u]){
            indegree[x]--;
            if(!indegree[x]){
                q1.push(x);
            }
        }
    }
    for(int x:topo_ans){
        cout<<x<<" ";
    }
    cout<<endl;
    int dist[V];
    for(int i=0;i<V;i++) {
        dist[i] = INT16_MAX;
    }
    dist[source]  = 0;
    for(int u:topo_ans){
        if(dist[u] != INT16_MAX){
        for(int v:adj[u]){
                if(dist[v]>dist[u]+weight[u][v]){
                    dist[v] = dist[u]+weight[u][v];
            }
            }
        }
    }
    for (int i = 0; i < V; i++){
	    (dist[i] == INT16_MAX)? cout << "INF ": cout << dist[i] << " "; 
    }
    cout<<endl;

}



int main(int argc, char const *argv[]){
    /* code */

    vector<int> adj[V];
    int weight[V][V] = {0};
    int indegree[V] = {0};
    
    add_edge(adj,0,1,weight,2,indegree);
    add_edge(adj,0,4,weight,1,indegree);
    add_edge(adj,1,2,weight,3,indegree);
    add_edge(adj,2,3,weight,6,indegree);
    add_edge(adj,4,2,weight,2,indegree);
    add_edge(adj,4,5,weight,4,indegree);
    add_edge(adj,5,3,weight,1,indegree);
    // for(int i=0;i<V;i++){
    //     for(int j=0;j<V;j++){
    //         cout<<weight[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    solve(adj,0,indegree,weight);


    return 0;
}
