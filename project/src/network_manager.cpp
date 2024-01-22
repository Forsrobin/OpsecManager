module;
#include <iostream>

export module NetworkManager;

export class NetworkManager {
public:
  NetworkManager();
  ~NetworkManager();
};

NetworkManager::NetworkManager(/* args */)
{
    std::cout << "NetworkManager created" << std::endl;
}

NetworkManager::~NetworkManager()
{
}
