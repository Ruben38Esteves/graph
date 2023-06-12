#include "menus.h"
#include <chrono>
#include <thread>

Menus::Menus(){
    this->utils = Utils();
}

void Menus::printGraph(){
    std::cout << "This is the graph:" <<std::endl;
    std::cout <<std::endl;
    std::cout << "    1---0---2---4" << std::endl;
    std::cout << "   /|       |\\   " << std::endl;
    std::cout << "  / |       | \\  " << std::endl;
    std::cout << " 5  6       |  \\ " << std::endl;
    std::cout << "   / \\      3---9" << std::endl;
    std::cout << "  /   \\     |  / " << std::endl;
    std::cout << " 7-----8    10   " << std::endl;
}

void Menus::mainMenu(){
    int option = 38;
    while(option != 0){
        printGraph();
        std::cout <<std::endl;
        std::cout <<std::endl;
        std::cout << "Options:" << std::endl;
        std::cout << "1 - DFS" << std::endl;
        std::cout << "0 - Leave Program" << std::endl;
        std::cout << "Input:";
        std::cin >> option;
        std::cout <<std::endl;
        switch(option){
            case 0:
                std::cout << "Leaving program" << std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(1));
                break;
            case 1:
                int start;
                std::cout << "Start Vertex:";
                std::cin >> start;
                std::cout << std::endl;
                if(start>=0 && start<=10){
                    this->utils.graph.resetVisited();
                    this->utils.dfs(this->utils.graph.getVertex(start));
                    std::cout << std::endl;
                    std::this_thread::sleep_for(std::chrono::seconds(2));
                }
                break;
            default:
                std::cout << "Invalid option" << std::endl;
                break;
        }
        std::cout <<std::endl;
        std::cout << "---------------------------------" << std::endl;
        std::cout <<std::endl;
    }
}