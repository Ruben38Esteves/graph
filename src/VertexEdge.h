#ifndef _VERTEX_EDGE_
#define _VERTEX_EDGE_

#include <unordered_map>
#include <iostream>

class Edge;

class Vertex{
    public:
        Vertex(int id);
        int getId();
        std::unordered_map<int, Edge*> getAdj();
        void addEdge(Vertex* dest, int weight);
        void setVisited(bool visited);
        bool getVisited();
    private:
        int id;
        bool visited = false;
        std::unordered_map<int, Edge*> adj;
};

class Edge{
    public:
        Edge(Vertex* orig, Vertex* dest, int weight);
        int getWeight();
        Vertex* getOrig();
        Vertex* getDest();

    private:
        int weight;
        Vertex* orig;
        Vertex* dest;
};

#endif