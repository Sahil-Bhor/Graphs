#include<iostream>
using namespace std;

int main()
{
    int n, e, u, v;

    cout<<"Enter no of nodes: ";
    cin>>n;

    cout<<"Enter no of edges: ";
    cin>>e;

    int adjmat[n][n];

    for (int i = 0; i < n; i++) {
  
        for (int j = 0; j < n; j++) {
            adjmat[i][j] = 0;
        }
    }

    for (int i = 0; i < e; i++)
    {
        cout<<"Enter edges: ";
        cin>>u>>v;

        adjmat[u][v] = 1;
        // adjmat[v][u] = 1; // for undirected
        
    }

    cout<<endl;
    for (int i = 0; i < n; i++) {
  
        for (int j = 0; j < n; j++) {
            cout<<adjmat[i][j] <<" ";
        }
        cout<<endl;
    }
    


    cout<<endl;
    return 0;
}