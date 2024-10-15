#ifndef __SPARSE_GRAPH_H__
#define __SPARSE_GRAPH_H__

// Your code here
#include <vector>
#include <set>

using namespace std;

class SparseGraph
{
public:
    SparseGraph() : SparseGraph(3) {
        // Your code here
    }

    SparseGraph(int n_in) : vertices(n_in), edges(n_in) {
        // Your code here
    }

    SparseGraph(const SparseGraph& G) : vertices(G.vertices), edges(G.edges) {
        // Your code here

    }

    void AddEdge(int a, int b)
    {
        // Your code here
        edges[a].insert(b);
    }

    void RemoveEdge(int a, int b)
    {
        // Your code here
        edges[a].erase(b);
    }

    bool DoesEdgeExist(int a, int b) const
    {
        // Your code here
        return edges[a].count(b) == 1;
        
    }

    SparseGraph Transpose() const
    {
        // Your code here
        SparseGraph res(vertices);
        for (size_t i = 0; i < edges.size(); i++)
        {
            /* code */
            for (const auto &vertex : edges[i])
            {
                res.AddEdge(vertex, i);
            }
        }
        return res; 
    }

protected:
    // Your code here
    int vertices;
    vector<set<int>> edges;
};
#endif // __SPARSE_GRAPH_H__
