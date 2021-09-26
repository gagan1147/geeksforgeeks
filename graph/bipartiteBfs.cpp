#include <bits/stdc++.h>

using namespace std;

void insert_node(vector<int> adj[], int u, int v)
{

    adj[u].push_back(v);
    adj[v].push_back(u);
}

bool bfsChecker(int node, int color[], vector<int> adj[])
{

    color[node] = 1;
    queue<int> q1;
    q1.push(node);
    while (!q1.empty())
    {
        int source = q1.front();
        q1.pop();
        for (int x : adj[source])
        {
            if (color[x] == -1)
            {
                color[x] = 1 - color[source];
                q1.push(x);
            }
            else if (color[x] == color[source])
            {
                return false;
            }
        }
    }
    return true;
}

bool bipartiteChecker(vector<int> adj[], int V)
{

    int color[V];
    for (int i = 0; i < V; i++)
    {
        color[i] = -1;
    }

    for (int i = 0; i < V; i++)
    {
        if (color[i] == -1)
        {
            if (!bfsChecker(i, color, adj))
            {
                return false;
            }
        }
    }
    return true;
}

int main(int argc, char const *argv[])
{

    int V = 8;
    vector<int> adj[V];
    insert_node(adj, 0, 1);
    insert_node(adj, 1, 2);
    insert_node(adj, 1, 7);
    insert_node(adj, 2, 3);
    insert_node(adj, 3, 4);
    insert_node(adj, 7, 4);
    insert_node(adj, 4, 5);
    insert_node(adj, 5, 6);
    cout << (bipartiteChecker(adj, V)?"YES":"NO")<<endl;
    return 0;
}
