#include "graph.h"

Graph::Graph(){
    addVertex(0);
    addVertex(1);
    addVertex(2);
    addVertex(3);
    addVertex(4);
    addVertex(5);
    addVertex(6);
    addVertex(7);
    addVertex(8);
    addVertex(9);
    addVertex(10);
    addBidirectionalEdge(0,1,2);
    addBidirectionalEdge(0,2,5);
    addBidirectionalEdge(1,5,3);
    addBidirectionalEdge(1,6,9);
    addBidirectionalEdge(2,3,5);
    addBidirectionalEdge(2,4,6);
    addBidirectionalEdge(3,9,6);
    addBidirectionalEdge(3,10,7);
    addBidirectionalEdge(6,7,8);
    addBidirectionalEdge(6,8,1);
}

std::unordered_map<int, Vertex*> Graph::getVertexMap(){
    return this->vertexMap;
}

void Graph::addVertex(int id){
    Vertex* vertex = new Vertex(id);
    this->vertexMap[id] = vertex;
}

Vertex* Graph::getVertex(int id){
    return this->vertexMap[id];
}

void Graph::addEdge(int orig, int dest, int weight){
    Vertex* origVertex = this->getVertex(orig);
    Vertex* destVertex = this->getVertex(dest);
    origVertex->addEdge(destVertex, weight);
}

void Graph::addBidirectionalEdge(int orig, int dest, int weight){
    this->addEdge(orig, dest, weight);
    this->addEdge(dest, orig, weight);
}

void Graph::resetVisited(){
    for(auto it = this->vertexMap.begin(); it != this->vertexMap.end(); it++){
        it->second->setVisited(false);
    }
}