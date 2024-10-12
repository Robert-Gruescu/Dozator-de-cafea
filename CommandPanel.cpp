#include "CommandPanel.h"
#include <iostream>

using namespace std;

CommandPanel::CommandPanel(CommandManager& mgr) : manager(mgr) {}

void CommandPanel::showMenu() const {
    cout << "Meniu:\n";
    cout << "1. CafeaEspresso\n";
    cout << "2. CafeaLunga\n";
    cout << "3. Cappuccino\n";
    cout << "4. LatteMacchiato\n";
    cout << "5. ApaPlata\n";
    cout << "6. CeaiNegru\n";
    cout << "0. Iesire\n";
}

int CommandPanel::takeCommand() const {
    int opt;
    cout << "Introduceti numarul corespunzator comenzii: ";
    cin >> opt;
    return opt;
}
