#ifndef CARD_H
#define CARD_H
#include <string>
class Card{
protected:
    std::string owner;
    int trips;
public:
    Card(std::string o, int t);
    virtual ~Card();
    virtual void show() const = 0;
    int getTrips() const;
    void setTrips(int t);
};
#endif
