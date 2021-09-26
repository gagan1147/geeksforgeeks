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
    //dijkstra(graph,1);
    vector<int> ans;
    int test_case;
    cin>>test_case;
    for(int i=0;i<test_case;i++){
        int vec,edge;
        cin>>vec;
        cin>>edge;
        int table[vec+1][vec+1];
        for(int i=0;i<=vec;i++){
            for(int j=0;j<=vec;j++){
                table[i][j]=0;    
            }
        }
        for(int i=0;i<edge;i++){
            int x,y,weight;
            cin>>x>>y>>weight;
            table[x][y] = weight;
            //table[y][x] = weight;
        }
        vector<int> dist(vec+1,INT16_MAX);
        vector<bool> fin(vec+1,false);
        
        int source;
        cin>>source;
        dist[source] = 0;
        for(int count = 1;count<vec;count++){
            int u = -1;
            for(int i=1;i<vec+1;i++){
                if(!fin[i] && (u==-1||dist[i]<dist[u])){
                    u = i;
                }
            }
            fin[u] = true;
            for(int i=1;i<vec+1;i++){
                if(table[u][i] && !fin[i]){
                    dist[i] = min(dist[i],dist[u]+table[u][i]);
                }
            }
        }
        int res;
        cin>>res;
        ans.push_back(dist[res]);
    }
    for(int x:ans){
        if(x==INT16_MAX){
            cout<<"NO";
        }
        else{
            cout<<x;
        }
        cout<<endl;
       
    }
    
    return 0;
}
