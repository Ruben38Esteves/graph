#include "utils.h"

Utils::Utils(){
    this->graph = Graph();
}

void Utils::dfs(Vertex* vertex){
    
    vertex->setVisited(true);
    std::cout << vertex->getId() << " -> ";

    std::unordered_map<int, Edge*> adj = vertex->getAdj();
    for(auto a: adj){
        if(!a.second->getDest()->getVisited()){
            this->dfs(a.second->getDest());
        }
    }
    
}