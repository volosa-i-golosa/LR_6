#include "StudentCard.h"
#include <iostream>
StudentCard::StudentCard(std::string o, int t, std::string s): Card(o, t), school(s) {}
void StudentCard::show() const {
    std::cout << "Free     card | owner: " << owner
              << " | uses: " << trips << " | Studies in: " << school << "\n";}
void StudentCard::setSchool(std::string s) { school = s; }
