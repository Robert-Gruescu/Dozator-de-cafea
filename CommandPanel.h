#ifndef COMMAND_PANEL_H
#define COMMAND_PANEL_H

#include "CommandManager.h"

class CommandPanel {
private:
    CommandManager& manager;

public:
    CommandPanel(CommandManager& mgr);
    void showMenu() const;
    int takeCommand() const;
};

#endif // COMMAND_PANEL_H
