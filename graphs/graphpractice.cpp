#include <iostream>
#include <vector>
using namespace std;

class Graph{
    private:
    int vertices;
    vector<vector<int>> adjmatrix;
    public:
    Graph(int v){
        this->vertices=v;
        adjmatrix.resize(v,vector<int>(v,0));
    }

    void addedge(int u,int v){
        if(u>=vertices || v>=vertices || v<0 || v<0 ){
            cout<<"Invalid edge"<<endl;
            return;
        }
        else{
            adjmatrix[u][v]=1;
            adjmatrix[v][u]=1;
        }
    }

    void print(){
        for(int i=0;i<vertices;i++){
            for(int j=0;j<vertices;j++){
                if(adjmatrix[i][j]!=0){
                    cout<<i<<" ----> "<<j<<endl;
                }
            }
        }
    }
};
int main(){
    Graph g1=Graph(5);
    g1.addedge(1,2);
    g1.addedge(2,3);
    g1.addedge(3,4);

    g1.print();

    return 0;
}