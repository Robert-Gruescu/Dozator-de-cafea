#include "CommandPanel.h"
#include "CommandManager.h"

int main() {
    RecipeRepo recipeRepo;
    recipeRepo.loadRecipesFromFile("recipes.txt");

    ResourceHandler resourceHandler;

    CommandManager commandManager(recipeRepo);
    CommandPanel commandPanel(commandManager);

    int opt;
    do {
        recipeRepo.showMenu();
        opt = commandPanel.takeCommand();

        if (opt != 0) {
            commandManager.takeCommand(opt);
        }
    } while (opt != 0);

    return 0;
}
