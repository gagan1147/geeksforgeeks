#include<bits/stdc++.h>

using namespace std;




void add_edge(vector<int> adj[],int u,int v,int indegree[]){
    adj[u].push_back(v);
    indegree[v]++;
}


bool cycle_detect(vector<int> adj[],int v,int indegree[]){

    queue<int> q1;
    for(int i=0;i<v;i++){
        if(!indegree[i]){
            q1.push(i);
        }
    }
    int count = 0;
    while(!q1.empty()){
        int u = q1.front();
        q1.pop();
        count++;
        for(int adjacent:adj[u]){
            indegree[adjacent]--;
            if(!indegree[adjacent]){
                q1.push(adjacent);
            }
        }
    }

    return (count!=v);
}

int main(int argc, char const *argv[]){
    
    int v = 5;
    int indegree[v] = {0};
    vector<int> adj[v];
    add_edge(adj,0,1,indegree);
    add_edge(adj,4,1,indegree);
    add_edge(adj,1,2,indegree);
    add_edge(adj,2,3,indegree);
    //add_edge(adj,3,1,indegree);

    if(cycle_detect(adj,v,indegree)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}
