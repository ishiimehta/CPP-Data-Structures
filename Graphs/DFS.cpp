/*
 * DFS.cpp
 *
 *  Created on: 09-Oct-2021
 *      Author: mehta
 */


#include <iostream>
#include <vector>
using namespace std;

class Graph{
public:
    int V;
    vector <int> *adj;
    bool *visited;
public:
    Graph(int V);
    void addEdge(int v, int w);
    void DFS(int ele);
};

Graph:: Graph(int V){
    this->V=V;
    adj= new vector<int> [V];
    visited= new bool[V];
    for(int i = 0; i < V; i++)
        visited[i] = false;
}

void Graph:: addEdge(int v, int w){
    adj[v].push_back(w);
}

void Graph:: DFS(int ele){
    if(visited[ele]) return;
    cout<<ele<<" ";
    visited[ele]=true;

    for(auto node: adj[ele]){
        DFS(node);
    }

}

int main() {
    Graph g(10);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 5);
    g.addEdge(5, 6);
    g.addEdge(6, 7);
    g.addEdge(6, 2);

 g.DFS(0);

}

