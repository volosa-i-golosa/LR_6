#include "Card.h"
Card::Card(std::string o, int t): owner(o), trips(t) {}
Card::~Card(){}
int Card::getTrips() const {return trips;}
void Card::setTrips(int t) {trips = t;}
