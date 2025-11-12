#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int vertices;
    vector<vector<int>> adjmatrix;

public:
    Graph(int v)
    {
        this->vertices = v;
        adjmatrix.resize(v, vector<int>(v, 0));
    }

    void addedge(int u, int v)
    {
        if (u >= vertices || v >= vertices || v < 0 || v < 0)
        {
            cout << "Invalid edge" << endl;
            return;
        }
        else
        {
            adjmatrix[u][v] = 1;
            adjmatrix[v][u] = 1;
        }
    }

    void print()
    {
        for (int i = 0; i < vertices; i++)
        {
            for (int j = 0; j < vertices; j++)
            {
                if (adjmatrix[i][j] != 0)
                {
                    cout << i << " ----> " << j << endl;
                }
            }
        }
    }
    void removeEdge(int u, int v)
    {
        if (u >= vertices || v >= vertices || u < 0 || v < 0)
        {
            cout << "Invalid vertex number!\n";
            return;
        }

        adjmatrix[u][v] = 0;
        adjmatrix[v][u] = 0;
    }
    bool hasedge(int u, int v)
    {
        if (u >= vertices || v >= vertices || v < 0 || u < 0)
        {
            return false;
        }
        else
        {
            return adjmatrix[u][v] == 1;
        }
    }
    void showneighbours(int a)
    {
        if (a >= vertices || a < 0)
        {
            return;
        }
        else
        {
            for (int i = 0; i < vertices; i++)
            {
                if (adjmatrix[a][i] == 1)
                {
                    cout << i << " ";
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    Graph g1 = Graph(5);
    g1.addedge(1, 2);
    g1.addedge(2, 3);
    g1.addedge(3, 4);

    g1.print();
    // cout << "removing an edge" << endl;
    // g1.removeEdge(2, 3);
    cout << "---------------------" << endl;
    g1.print();

    bool has = g1.hasedge(2, 3);
    cout << has << endl;

    cout << "neighbour of 3 is: ";
    g1.showneighbours(3);

    return 0;
}