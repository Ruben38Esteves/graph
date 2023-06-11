#include "graph.h"

graph::graph(){
}

unordered_map<int, Vertex*> graph::getVertexMap(){
    return this->vertexMap;
}

void graph::addVertex(int id){
    Vertex* vertex = new Vertex(id);
    this->vertexMap[id] = vertex;
}

Vertex* graph::getVertex(int id){
    return this->vertexMap[id];
}

void graph::addEdge(int orig, int dest, int weight){
    Vertex* origVertex = this->getVertex(orig);
    Vertex* destVertex = this->getVertex(dest);
    origVertex->addEdge(destVertex, weight);
}

void graph::addBidirectionalEdge(int orig, int dest, int weight){
    this->addEdge(orig, dest, weight);
    this->addEdge(dest, orig, weight);
}