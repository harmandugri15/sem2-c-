#include <iostream>
#include <vector>
using namespace std;

class Graph {
    int V;
    vector<vector<int>> adj;

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V);
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
        adj[v].push_back(u); // undirected
    }

    bool isCyclicDFS(int node, int parent, vector<bool>& visited) {
        visited[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                if (isCyclicDFS(neighbor, node, visited))
                    return true;
            } 
            // If visited and not parent, cycle exists
            else if (neighbor != parent)
                return true;
        }

        return false;
    }

    bool hasCycle() {
        vector<bool> visited(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isCyclicDFS(i, -1, visited))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);
    g.addEdge(4, 1); // cycle here

    if (g.hasCycle())
        cout << "Cycle detected\n";
    else
        cout << "No cycle\n";

    return 0;
}
