#include "VertexEdge.h"

Vertex::Vertex(int id){
    this->id = id;
}

int Vertex::getId(){
    return this->id;
}

std::unordered_map<int, Edge*> Vertex::getAdj(){
    return this->adj;
}

void Vertex::addEdge(Vertex* dest, int weight){
    Vertex* orig = this;
    Edge* edge = new Edge(orig, dest, weight);
    this->adj[dest->getId()] = edge;
}

void Vertex::setVisited(bool visited){
    this->visited = visited;
}

bool Vertex::getVisited(){
    return this->visited;
}

Edge::Edge(Vertex* orig, Vertex* dest, int weight){
    this->orig = orig;
    this->dest = dest;
    this->weight = weight;
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