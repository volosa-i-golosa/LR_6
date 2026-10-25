#ifndef GENERALCARD_H
#define GENERALCARD_H
#include "Card.h"
class GeneralCard: public Card {
private:
    double balance;
public:
    GeneralCard(std::string o, int t, double b);
    void show() const override;
    void setBalance(double b);
};
#endif
