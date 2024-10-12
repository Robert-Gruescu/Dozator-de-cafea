#ifndef RECIPE_H
#define RECIPE_H

#include <string>

class Recipe {
private:
    std::string name;
    int coffeeQuantity;
    int waterQuantity;
    int milkQuantity;

public:
    Recipe(std::string n, int coffee, int water, int milk);
    std::string getName() const;
    int getCoffeeQuantity() const;
    int getWaterQuantity() const;
    int getMilkQuantity() const;
};

#endif // RECIPE_H
