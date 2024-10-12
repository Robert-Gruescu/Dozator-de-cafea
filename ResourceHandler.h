#ifndef RESOURCE_HANDLER_H
#define RESOURCE_HANDLER_H

#include <list>
#include "ResourceContainer.h"

class ResourceHandler {
private:
    std::list<ResourceContainer> coffeeContainers;
    std::list<ResourceContainer> waterContainers;
    std::list<ResourceContainer> milkContainers;

public:
    ResourceHandler();
    void boilWater(int quantity, int duration);
    void grindCoffee(int quantity, int duration);
    void heatMilk(int quantity, int duration);
    void steepTea(int duration);
};

#endif // RESOURCE_HANDLER_H
