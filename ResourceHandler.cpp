#include "ResourceHandler.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

ResourceHandler::ResourceHandler() {
    coffeeContainers.emplace_back(COFFEE);
    waterContainers.emplace_back(WATER);
    milkContainers.emplace_back(MILK);
}

void ResourceHandler::boilWater(int quantity, int duration) {
    if (quantity > 0) {
        int actualQuantity = waterContainers.front().getQuantity(quantity);
        if (actualQuantity < quantity) {
            cout << "Reincarca apa!\n";
            waterContainers.front().refill();
            actualQuantity = waterContainers.front().getQuantity(quantity);
        }

        if (actualQuantity >= quantity) {
            cout << "Apa fierbe pentru " << duration << " secunde.\n";
            this_thread::sleep_for(chrono::seconds(duration));
        }
    }
}

void ResourceHandler::grindCoffee(int quantity, int duration) {
    int actualQuantity = coffeeContainers.front().getQuantity(quantity);
    if (actualQuantity < quantity) {
        cout << "Nu sunt suficiente resurse de cafea!\n";
        coffeeContainers.front().refill();
        actualQuantity = coffeeContainers.front().getQuantity(quantity);
    }

    if (actualQuantity >= quantity) {
        cout << "Se macina cafeaua pentru " << duration << " secunde.\n";
        this_thread::sleep_for(chrono::seconds(duration));
    }
}

void ResourceHandler::heatMilk(int quantity, int duration) {
    if (quantity > 0) {
        int actualQuantity = milkContainers.front().getQuantity(quantity);
        if (actualQuantity < quantity) {
            cout << "Reincarca laptele!\n";
            milkContainers.front().refill();
            actualQuantity = milkContainers.front().getQuantity(quantity);
        }

        if (actualQuantity >= quantity) {
            cout << "Se incalzeste laptele pentru " << duration << " secunde.\n";
            this_thread::sleep_for(chrono::seconds(duration));
        }
    }
}

void ResourceHandler::steepTea(int duration) {
    cout << "Ceaiul se inabusa pentru " << duration << " secunde.\n";
    this_thread::sleep_for(chrono::seconds(duration));
}
