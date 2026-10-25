#ifndef STUDENTCARD_H
#define STUDENTCARD_H
#include "Card.h"
class StudentCard: public Card{
private:
    std::string school;
public:
    StudentCard(std::string o, int t, std::string s);
    void show() const override;
    void setSchool(std::string s);};
#endif
