#include<iostream>
#include<vector>
#include<algorithm> // for find()
using namespace std;

class Graph {
private:
    int V; // Number of vertices
    vector<vector<int>> adjList; // Adjacency List

public:
    // Constructor
    Graph(int vertices) {
        V = vertices;
        adjList.resize(V);
    }

    // Function to add an edge (undirected)
    void addEdge(int u, int v) {
        if (u >= 0 && v >= 0 && u < V && v < V) {
            adjList[u].push_back(v);
            adjList[v].push_back(u); // Because it's undirected
        } else {
            cout << "Invalid vertex index!\n";
        }
    }

    // Function to remove an edge (undirected)
    void removeEdge(int u, int v) {
        if (u >= 0 && v >= 0 && u < V && v < V) {
           
            adjList[u].erase(remove(adjList[u].begin(), adjList[u].end(), v), adjList[u].end());
            adjList[v].erase(remove(adjList[v].begin(), adjList[v].end(), u), adjList[v].end());
        } else {
            cout << "Invalid vertex index!\n";
        }
    }

    // Function to check if an edge exists
    bool hasEdge(int u, int v) {
        
    }

    // Function to print the adjacency list
    void printGraph() {
        cout << "\nAdjacency List Representation:\n";
        for (int i = 0; i < V; i++) {
            cout << i << " -> ";
            for (int neighbor : adjList[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }
};

int main() {
    Graph g(5);

    g.addEdge(0, 1);
    g.addEdge(0, 4);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(1, 4);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Before removing edge:\n";
    g.printGraph();

    // Check and remove edge
    if (g.hasEdge(1, 4)) {
        cout << "\nEdge between 1 and 4 exists. Removing it...\n";
        g.removeEdge(1, 4);
    }

    cout << "\nAfter removing edge:\n";
    g.printGraph();

    // Check again
    cout << "\nDoes edge between 1 and 4 exist? "
         << (g.hasEdge(1, 4) ? "Yes" : "No") << endl;

    return 0;
}
