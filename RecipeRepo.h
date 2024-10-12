#ifndef RECIPE_REPO_H
#define RECIPE_REPO_H

#include <vector>
#include "Recipe.h"

class RecipeRepo {
private:
    std::vector<Recipe> recipes;

public:
    void loadRecipesFromFile(const std::string& filename);
    Recipe getRecipeByIndex(int index) const;
    int getNumRecipes() const;
    void showMenu() const;
};

#endif // RECIPE_REPO_H
