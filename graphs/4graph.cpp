#include <iostream>
#include <vector>

using namespace std;

class Graph {
private:
    int V; 
    vector<vector<int>> adj;

    void dfsHelper(int node, vector<bool>& visited) {
       
        visited[node] = true;
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfsHelper(neighbor, visited);
            }
        }
    }

public:
    Graph(int vertices) {
        V = vertices;
        adj.resize(V); 
    }

    void addEdge(int u, int v) {
        adj[u].push_back(v);
    }

    void DFS(int startNode) {
        
        vector<bool> visited(V, false);
        cout << "DFS traversal starting from node " << startNode << ": ";
        dfsHelper(startNode, visited);
        
        cout << endl;
    }
};


int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    g.DFS(0);

    return 0;
}

// ----------------------------function to check the number of connected nodes-------------------
//------------------------// to check for cycle if the visited rasta is not a parent than the graph has a cycle 
