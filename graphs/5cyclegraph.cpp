// #include <iostream>
// #include <vector>
// using namespace std;

// class Graph {
//     int V;
//     vector<vector<int>> adj;

// public:
//     Graph(int vertices) {
//         V = vertices;
//         adj.resize(V);
//     }

//     void addEdge(int u, int v) {
//         adj[u].push_back(v);
//         adj[v].push_back(u);
//     }

//     bool isCyclicDFS(int node, int parent, vector<bool>& visited) {
//         visited[node] = true;

//         for (int neighbor : adj[node]) {
//             if (!visited[neighbor]) {
//                 if (isCyclicDFS(neighbor, node, visited))
//                     return true;
//             } 
//             else if (neighbor != parent)
//                 return true;
//         }

//         return false;
//     }

//     bool hasCycle() {
//         vector<bool> visited(V, false);

//         for (int i = 0; i < V; i++) {
//             if (!visited[i]) {
//                 if (isCyclicDFS(i, -1, visited))
//                     return true;
//             }
//         }
//         return false;
//     }
// };

// int main() {
//     Graph g(6);
//     g.addEdge(0, 1);
//     g.addEdge(1, 2);
//     g.addEdge(2, 3);
//     g.addEdge(3, 4);
//     g.addEdge(4, 1); 

//     if (g.hasCycle())
//         cout << "Cycle detected"<<endl;
//     else
//         cout << "No cycle"<<endl;

//     return 0;
// }


// //---------------------------------------------for directional graphs as the previous will not always give correct answer for corrected graph ---------------------------------------


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
        adj[u].push_back(v); // Directed edge
    }

    bool isCyclicDFS(int node, vector<bool>& visited, vector<bool>& recStack) {
        visited[node] = true;
        recStack[node] = true;

        for (int neighbor : adj[node]) {
            if (!visited[neighbor] && isCyclicDFS(neighbor, visited, recStack))
                return true;
            else if (recStack[neighbor])
                return true;
        }

        recStack[node] = false;
        return false;
    }

    bool isCyclic() {
        vector<bool> visited(V, false);
        vector<bool> recStack(V, false);

        for (int i = 0; i < V; i++) {
            if (!visited[i]) {
                if (isCyclicDFS(i, visited, recStack))
                    return true;
            }
        }
        return false;
    }
};

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(0, 2); // No cycle here

    if (g.isCyclic())
        cout << "Cycle detected" << endl;
    else
        cout << "No cycle" << endl;

    return 0;
}
