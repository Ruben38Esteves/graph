#include "VertexEdge.h"

Vertex::Vertex(int id){
    this->id = id;
}

int Vertex::getId(){
    return this->id;
}

unordered_map<int, Edge*> Vertex::getAdj(){
    return this->adj;
}

void Vertex::addEdge(Vertex* dest, int weight){
    Edge* edge = new Edge(this, dest, weight);
    this->adj[dest->getId()] = edge;
}

int Edge::getWeight(){
    return this->weight;
}

Vertex* Edge::getOrig(){
    return this->orig;
}

Vertex* Edge::getDest(){
    return this->dest;
}