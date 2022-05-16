#include <iostream>
#include <map>
#include <list>
using namespace std;

int main()
{
    int n, e, u, v;
    map< int, list<int> > adj;

    cout << "Enter no of nodes: ";
    cin >> n;
    cout << "Enter no of edges: ";
    cin >> e;

    for (int i = 0; i < e; i++)
    {
        cout << "Enter the nodes: ";
        cin >> u >> v;

        adj[u].push_back(v);
        // adj[v].push_back(u); // for undirected graph
    }

    for (auto i : adj)
    {
        cout << i.first << "->";
        for (auto j : i.second)
        {
            cout << j << " ";
        }
        cout<<endl;
    }

    cout << endl;
    return 0;
}