#ifndef RESOURCE_CONTAINER_H
#define RESOURCE_CONTAINER_H

#include "Resource.h"

class ResourceContainer {
private:
    Resource resource;
    int lowQ = 20;
    int maxQ = 100;
    int currentQ;

public:
    ResourceContainer(Resource res);
    void refill();
    int getQuantity(int quantity);
};

#endif // RESOURCE_CONTAINER_H
