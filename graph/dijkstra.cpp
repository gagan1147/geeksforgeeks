#include<bits/stdc++.h>

using namespace std;

const int V = 4;


void dijkstra(int graph[V][V],int source){

    vector<int> dist(V,INT16_MAX);
    vector<bool> fin(V,false);
    
    dist[source] = 0;
    for(int count = 0;count<V-1;count++){
        int u = -1;
        for(int i=0;i<V;i++){
            if(!fin[i] && (u==-1||dist[i]<dist[u])){
                u = i;
            }
        }
        fin[u] = true;
        for(int i=0;i<V;i++){
            if(graph[u][i] && !fin[i]){
                dist[i] = min(dist[i],dist[u]+graph[u][i]);
            }
        }
    }
    for(int x:dist){
        cout<<x<<" ";
    }

}





int main(int argc, char const *argv[]){


    int graph[V][V] = {{0,50,100,0},{50,0,30,200},{100,30,0,20},{0,200,20,0}};
    dijkstra(graph,1);
    return 0;
}
