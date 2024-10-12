#include "ResourceContainer.h"
#include <iostream>

using namespace std;

ResourceContainer::ResourceContainer(Resource res) : resource(res), currentQ(maxQ) {}

void ResourceContainer::refill() {
    currentQ = maxQ;
}

int ResourceContainer::getQuantity(int quantity) {
    if (currentQ >= quantity) {
        currentQ -= quantity;
        return quantity;
    }
    else {
        cout << "Nu sunt suficiente resurse.\n";
        return 0;
    }
}
