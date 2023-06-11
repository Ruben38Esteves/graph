#ifndef _VERTEX_EDGE_
#define _VERTEX_EDGE_

#include <unordered_map>

class Edge;

class Vertex{
    public:
        Vertex(int id);
        int getId();
        unordered_map<int, Edge*> getAdj();
        void addEdge(Vertex* dest, int weight);

    private:
        int id;
        unordered_map<int, Edge*> adj;
};

class Edge{
    public:
        int getWeight();
        Vertex* getOrig();
        Vertex* getDest();

    private:
        int weight;
        Vertex* orig;
        Vertex* dest;
};

#endif