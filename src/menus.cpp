#include "menus.h"

Menus::Menus(){
    this->utils = Utils();
}

void Menus::mainMenu(){
    int option;
    std::cout << "---------------------------------" << std::endl;
    std::cout << "1 - DFS" << std::endl;
    std::cin >> option;
    while(option != 0){
        switch(option){
            case 1:
                int start;
                std::cin >> start;
                if(start>=0 && start<=10){
                    this->utils.graph.resetVisited();
                    this->utils.dfs(this->utils.graph.getVertex(start));
                }
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
    }
}