#include<bits/stdc++.h>
using namespace std;

class graph{
    public:
    unordered_map<int, vector<int>>adjList;

    void addEdge(int u, int v, bool direction){
        // direction for directed and undirected
        // direction = 0 -> undirected
        // direction = 1-> directed
        adjList[u].push_back(v);
        if(direction==0){
            adjList[v].push_back(u);
        }
    }

    void printGraph(){
        for(auto i:adjList){
            cout<<i.first<<"->";
            for(auto x:i.second){
                cout<<x;
            }
            cout<<endl;
        }
    }
};

int main(){
    int n;
    cout<<"enter the number of node : ";
    cin>>n;
    int m;
    cout<<"enter the number of Edges : ";
    cin>>m;
    graph g;
    for(int i=0;i<m;i++){
        int u, v;
        cin>>u>>v;
        g.addEdge(u, v, 0);
    }
    g.printGraph();
    return 0;
}