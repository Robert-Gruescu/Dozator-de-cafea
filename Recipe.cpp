#include "Recipe.h"

Recipe::Recipe(std::string n, int coffee, int water, int milk)
    : name(n), coffeeQuantity(coffee), waterQuantity(water), milkQuantity(milk) {}

std::string Recipe::getName() const {
    return name;
}

int Recipe::getCoffeeQuantity() const {
    return coffeeQuantity;
}

int Recipe::getWaterQuantity() const {
    return waterQuantity;
}

int Recipe::getMilkQuantity() const {
    return milkQuantity;
}
