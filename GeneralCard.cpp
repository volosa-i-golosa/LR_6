#include "GeneralCard.h"
#include <iostream>
GeneralCard::GeneralCard(std::string o, int t, double b) : Card(o, t), balance(b){}
void GeneralCard::show() const{
    std::cout << "Standart card | Owner: " << owner
              << " | Uses: " << trips << " | balance: " << balance << "\n";}
void GeneralCard::setBalance(double b){balance = b;}
