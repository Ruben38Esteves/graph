#ifndef _GRAPH_
#define _GRAPH_

#include <unordered_map>
#include "VertexEdge.h"

class graph{
    public:
        graph();
        unordered_map<int, Vertex*> getVertexMap();
        void addVertex(int id);
        Vertex* getVertex(int id);
        void addEdge(int orig, int dest, int weight);
        void addBidirectionalEdge(int orig, int dest, int weight);
    private:
        unordered_map<int, Vertex*> vertexMap;
}

#endif