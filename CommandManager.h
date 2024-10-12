#ifndef COMMAND_MANAGER_H
#define COMMAND_MANAGER_H

#include "ResourceHandler.h"
#include "RecipeRepo.h"

class CommandManager {
private:
    ResourceHandler handler;
    bool canWork;
    RecipeRepo& recipeRepo;

public:
    CommandManager(RecipeRepo& repo);
    void reload();
    bool takeCommand(int order);
};

#endif // COMMAND_MANAGER_H
