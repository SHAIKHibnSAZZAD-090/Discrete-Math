#include <bits/stdc++.h>
using namespace std;
bool visited[100] = {false}, Tvisited[100] = {false};
vector<int> graph[100], Tgraph[100];
vector<int> order, components;
void dfs(int source)
{
    visited[source] = 1;
    for (int i = 0; i < graph[source].size(); i++)
    {
        if (visited[graph[source][i]] == 0)
        {
            dfs(graph[source][i]);
        }
    }
    order.push_back(source);
}
void dfs2(int source)
{
    Tvisited[source] = 1;
    components.push_back(source);
    for (int i = 0; i < Tgraph[source].size(); i++)
    {
        if (Tvisited[Tgraph[source][i]] == 0)
        {
            dfs2(Tgraph[source][i]);
        }
    }
}
int main()
{
    int nodes, edges;
    cin >> nodes >> edges;
    for (int i = 0; i < edges; i++)
    {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
        Tgraph[v].push_back(u);
    }
    for (int i = 0; i < nodes; i++)
    {
        if (visited[i] == 0)
        {
            dfs(i);
        }
    }
    for (int i = 0; i < nodes; i++)
    {
        int v = order[nodes - 1 - i];
        if (Tvisited[v] == 0)
        {
            dfs2(v);
            cout << "strongly connnected components: " << endl;

            for (int j = 0; j < components.size(); j++)
            {
                cout << components[j] << " ";
            }

            cout << endl;
            components.clear();
        }
    }
}