#ifndef _GRAPH_
#define _GRAPH_

#include <unordered_map>
#include <iostream>
#include "VertexEdge.h"

class Graph{
    public:
        Graph();
        std::unordered_map<int, Vertex*> getVertexMap();
        void addVertex(int id);
        Vertex* getVertex(int id);
        void addEdge(int orig, int dest, int weight);
        void addBidirectionalEdge(int orig, int dest, int weight);
        void resetVisited();
    private:
        std::unordered_map<int, Vertex*> vertexMap;
};

#endif