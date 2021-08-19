#include<bits/stdc++.h>


using namespace std;

const int V = 4;
void add_edge(vector<int> adj[],int u,int v,int weight[V][V],int weig){
    adj[u].push_back(v);
    adj[v].push_back(u);
    weight[u][v] = weig;
    weight[v][u] = weig;
}



int primsMST(vector<int> adj[],int weight[V][V]){

    bool mSet[V] = {false};
    int key[V],res = 0;
    fill(key,key+V,INT16_MAX);
    int x = INT16_MIN;
    key[0] = 0;
    for(count =0;count<V;count++){
        int u=-1;
        for(int i=0;i<V;i++){
            if(!mset[i] && (u==-1 || key[i]<key[u])){
                u = i;
            }
        }
        mSet[u] = true;
        res += key[u];
        for(int i=0;i<V;i++){
            if(weight[u][i] && !mSet[i]){
                key[i] = min(key[i],weight[u][i])
            }
        }
    }
    return res;

}



int main(int argc, char const *argv[]){
    vector<int> adj[V];
    int weight[V][V] = {0};
    add_edge(adj,0,1,weight,5);
    add_edge(adj,0,2,weight,10);
    add_edge(adj,1,2,weight,8);
    add_edge(adj,3,1,weight,15);
    add_edge(adj,2,3,weight,20);
    cout<<primsMST(adj,weight)<<endl;
    return 0;
}
