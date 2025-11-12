// #include <iostream>
// #include <vector>
// using namespace std;

// class Graph
// {
// private:
//     int vertices;
//     vector<vector<int>> adjmatrix;

// public:
//     Graph(int v)
//     {
//         this->vertices = v;
//         adjmatrix.resize(v, vector<int>(v, 0));
//     }

//     void addedge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || v < 0 || v < 0)
//         {
//             cout << "Invalid edge" << endl;
//             return;
//         }
//         else
//         {
//             adjmatrix[u][v] = 1;
//             adjmatrix[v][u] = 1;
//         }
//     }

//     void print()
//     {
//         for (int i = 0; i < vertices; i++)
//         {
//             for (int j = 0; j < vertices; j++)
//             {
//                 if (adjmatrix[i][j] != 0)
//                 {
//                     cout << i << " ----> " << j << endl;
//                 }
//             }
//         }
//     }
//     void removeEdge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || u < 0 || v < 0)
//         {
//             cout << "Invalid vertex number!\n";
//             return;
//         }

//         adjmatrix[u][v] = 0;
//         adjmatrix[v][u] = 0;
//     }
//     bool hasedge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || v < 0 || u < 0)
//         {
//             return false;
//         }
//         else
//         {
//             return adjmatrix[u][v] == 1;
//         }
//     }
//     void showneighbours(int a)
//     {
//         if (a >= vertices || a < 0)
//         {
//             return;
//         }
//         else
//         {
//             for (int i = 0; i < vertices; i++)
//             {
//                 if (adjmatrix[a][i] == 1)
//                 {
//                     cout << i << " ";
//                 }
//             }
//             cout << endl;
//         }
//     }
// };
// int main()
// {
//     Graph g1 = Graph(5);
//     g1.addedge(1, 2);
//     g1.addedge(2, 3);
//     g1.addedge(3, 4);

//     g1.print();
//     // cout << "removing an edge" << endl;
//     // g1.removeEdge(2, 3);
//     cout << "---------------------" << endl;
//     g1.print();

//     bool has = g1.hasedge(2, 3);
//     cout << has << endl;

//     cout << "neighbour of 3 is: ";
//     g1.showneighbours(3);

//     return 0;
// }

//------------------------------------------------for directed graph ---------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// class Graph
// {
// private:
//     int vertices;
//     vector<vector<int>> adjmatrix;

// public:
//     Graph(int v)
//     {
//         this->vertices = v;
//         adjmatrix.resize(v, vector<int>(v, 0));
//     }

//     void addedge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || v < 0 || v < 0)
//         {
//             cout << "Invalid edge" << endl;
//             return;
//         }
//         else
//         {
//             adjmatrix[u][v] = 1;
//         }
//     }

//     void print()
//     {
//         for (int i = 0; i < vertices; i++)
//         {
//             for (int j = 0; j < vertices; j++)
//             {
//                 if (adjmatrix[i][j] != 0)
//                 {
//                     cout << i << " ----> " << j << endl;
//                 }
//             }
//         }
//     }

//     void removeEdge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || u < 0 || v < 0)
//         {
//             cout << "Invalid vertex number!\n";
//             return;
//         }

//         adjmatrix[u][v] = 0;
//     }

//     bool hasedge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || v < 0 || u < 0)
//         {
//             return false;
//         }
//         else
//         {
//             return adjmatrix[u][v] == 1;
//         }
//     }
//     void showneighbours(int a)
//     {
//         if (a >= vertices || a < 0)
//         {
//             return;
//         }
//         else
//         {
//             for (int i = 0; i < vertices; i++)
//             {
//                 if (adjmatrix[a][i] == 1)
//                 {
//                     cout << i << " ";
//                 }
//             }
//             cout << endl;
//         }
//     }
//     void printinoutdegree()
//     {
//         for (int i = 0; i < vertices; i++)
//         {
//             int indegree = 0;
//             int outdegree = 0;
//             for (int j = 0; j < vertices; j++)
//             {
//                 if (adjmatrix[i][j] == 1)
//                 {
//                     indegree++;
//                 }
//                 else if (adjmatrix[j][i] == 1)
//                 {
//                     outdegree++;
//                 }
//             }
//             cout << "indegree: " << indegree << "Outdegree: " << outdegree << endl;
//         }
//     }
// };
// int main()
// {
//     Graph g1 = Graph(5);
//     g1.addedge(1, 2);
//     g1.addedge(2, 3);
//     g1.addedge(3, 4);

//     g1.print();
//     // cout << "removing an edge" << endl;
//     // g1.removeEdge(2, 3);
//     cout << "---------------------" << endl;
//     g1.print();

//     bool has = g1.hasedge(2, 3);
//     cout << has << endl;

//     cout << "neighbour of 3 is: ";
//     g1.showneighbours(3);
//     cout << "-------------------------------" << endl;
//     g1.printinoutdegree();

//     return 0;
// }

// -------------------------------------------directed and weighted graph------------------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// class Graph
// {
// private:
//     int vertices;
//     vector<vector<int>> adjmatrix;

// public:
//     Graph(int v)
//     {
//         this->vertices = v;
//         adjmatrix.resize(v, vector<int>(v, 0));
//     }

//     void addedge(int u, int v,int w)
//     {
//         if (u >= vertices || v >= vertices || v < 0 || v < 0)
//         {
//             cout << "Invalid edge" << endl;
//             return;
//         }
//         else
//         {
//             adjmatrix[u][v] = w;
//         }
//     }

//     void print()
//     {
//         for (int i = 0; i < vertices; i++)
//         {
//             for (int j = 0; j < vertices; j++)
//             {
//                 if (adjmatrix[i][j] != 0)
//                 {
//                     cout << i << " ----> " << j <<"  weight is : "<<adjmatrix[i][j]<< endl;
//                 }
//             }
//         }
//     }

//     void removeEdge(int u, int v)
//     {
//         if (u >= vertices || v >= vertices || u < 0 || v < 0)
//         {
//             cout << "Invalid vertex number!\n";
//             return;
//         }

//         adjmatrix[u][v] = 0;
//     }

//     void printinoutdegree()
//     {
//         for (int i = 0; i < vertices; i++)
//         {
//             int indegree = 0;
//             int outdegree = 0;
//             for (int j = 0; j < vertices; j++)
//             {
//                 if (adjmatrix[i][j]!=0)
//                 {
//                     indegree+=adjmatrix[i][j];
//                 }
//                 else if (adjmatrix[j][i]!=0)
//                 {
//                     outdegree+=adjmatrix[j][i];
//                 }
//             }
//             cout << "indegree of "<<i<<" is: " << outdegree <<"   Outdegree: " <<indegree << endl;
//         }
//     }
// };
// int main()
// {
//     Graph g1 = Graph(5);
//     g1.addedge(1, 2,2);
//     g1.addedge(2, 3,4);
//     g1.addedge(3, 4,6);

//     g1.print();

//     cout << "-------------------------------" << endl;
//     g1.printinoutdegree();

//     return 0;
// }

//------------------------------------adjacency list representation---(directed graph)-----------------------------

// #include <iostream>
// #include <vector>
// using namespace std;

// class Graph{
//     private:
//     int vertices;
//     vector<vector<int>> adjacent;
//     public:
//     Graph(int v){
//         this->vertices=v;
//         adjacent.resize(v);
//     }

//     void addedge(int u,int v){
//         if(u<0 || v<0 || u>=vertices || v>=vertices){
//             return;
//         }
//         else{
//             adjacent[u].push_back(v);
//             // adjacent[v].push_back(u); // to make it directed this line is an extra
//         }
//     }

//     void print(){
//         for(int i=0;i<vertices;i++){
//                 for(int j=0;j<adjacent[i].size();j++){
//                     cout<<i<<" ---> "<<adjacent[i][j]<<endl;
//                 }
//         }
//     }

//     void removedge(int u,int v){
//         if(u<0 || v<0 || u>=vertices || v>=vertices){
//             return;
//         }
//         else{
//             for(int i=0;i<adjacent[u].size();i++){
//                 if(adjacent[u][i]==v){
//                     adjacent[u].erase(adjacent[u].begin()+i);
//                     break;
//                 }
//             }
//         }
//     }

//     void degreeofvertex(int a){
//             cout<<"Degree of "<<a <<" is :  "<<adjacent[a].size()<<endl;
//     }

// };

// int main(){
//     Graph g1=Graph(5);
//     g1.addedge(1,2);
//     g1.addedge(2,3);
//     g1.addedge(3,4);
//     g1.addedge(2,1);

//     // g1.removedge(2,3);

//     g1.print();
//     g1.degreeofvertex(2);

//     return 0;
// }

//---------------------------adjacency list weightedirectedgraph----------------------------

#include <iostream>
#include <vector>
using namespace std;

class Graph
{
private:
    int vertices;
    vector<vector<pair<int, int>>> adjacent;

public:
    Graph(int v)
    {
        this->vertices = v;
        adjacent.resize(v);
    }

    void addedge(int u, int v, int w)
    {
        if (u < 0 || v < 0 || u >= vertices || v >= vertices)
        {
            return;
        }
        else
        {
            adjacent[u].push_back({v, w});
            // adjacent[v].push_back(u); // to make it directed this line is an extra
        }
    }

    void print()
    {
        for (int i = 0; i < vertices; i++)
        {
            cout << i << " ---> ";
            for (auto [u, weight] : adjacent[i])
            {
                cout << u << " , " << weight;
            }
            cout << endl;
        }
    }

    void removedge(int u, int v)
    {
        if (u < 0 || v < 0 || u >= vertices || v >= vertices)
        {
            return;
        }
        else
        {
            for (int i = 0; i < adjacent[u].size(); i++)
            {
                if (adjacent[u][i].first == v)
                {
                    adjacent[u].erase(adjacent[u].begin() + i);
                    break;
                }
            }
        }
    }

    void degreeofvertex(int a)
    {
        cout << "Degree of " << a << " is :  " << adjacent[a].size() << endl;
    }
};

int main()
{
    Graph g1 = Graph(5);
    g1.addedge(1, 2, 3);
    g1.addedge(2, 3, 4);
    g1.addedge(3, 4, 2);
    g1.addedge(4, 1, 1);
    
    g1.removedge(4,1);

    // g1.removedge(2,3);

    g1.print();
    g1.degreeofvertex(2);

    return 0;
}