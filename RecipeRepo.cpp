#include "RecipeRepo.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

void RecipeRepo::loadRecipesFromFile(const string& filename) {
    ifstream file(filename);
    if (!file.is_open()) {
        cerr << "Eroare la deschiderea fisierului " << filename << "\n";
        return;
    }

    string line;
    while (getline(file, line)) {
        istringstream iss(line);
        string name;
        int coffee, water, milk;

        if (iss >> name >> coffee >> water >> milk) {
            recipes.emplace_back(name, coffee, water, milk);
        }
        else {
            cerr << "Linie invalida in fisierul retetelor.\n";
        }
    }

    file.close();
}

Recipe RecipeRepo::getRecipeByIndex(int index) const {
    if (index >= 0 && index < static_cast<int>(recipes.size())) {
        return recipes[index];
    }
    else {
        throw out_of_range("Index invalid pentru reteta.");
    }
}

int RecipeRepo::getNumRecipes() const {
    return static_cast<int>(recipes.size());
}

void RecipeRepo::showMenu() const {
    cout << "Meniu:\n";
    for (size_t i = 0; i < recipes.size(); ++i) {
        cout << i + 1 << ". " << recipes[i].getName() << "\n";
    }
    cout << "0. Iesire\n";
}
