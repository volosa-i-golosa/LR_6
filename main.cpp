#include <iostream>
#include <string>
#include "GeneralCard.h"
#include "StudentCard.h"
using namespace std;
int readInt() {
    string s;
    cin >> s;
    try {
        return stoi(s);
    } catch (...){
        cout << "DEBIL WARNING\n";
        return -1;}}
int main() {
    GeneralCard c1("student 0", 15, 500.0);
    GeneralCard c2("student 1", 0, 150.0);
    StudentCard s1("student 2", 20, "MSU");
    StudentCard s2("student 3", 0, "BMSTU");
    Card* arr[] = { &c1, &c2, &s1, &s2 };
    int size = 4;
    int choice;
    do {
        cout << "\n1. View\n2. Change uses\n3. Cards with 0 uses\n0. Exit\nChoice: ";
        choice = readInt();
        if (choice == 1) {
            for (int i = 0; i < size; i++) arr[i]->show();}
        else if (choice == 2) {
            cout << "Card num: ";
            int idx = readInt();
            if (idx >= 0 && idx < size) {
                cout << "new uses num: ";
                int t = readInt();
                if (t != -1) arr[idx]->setTrips(t);
            } else {
                cout << "DEBIL WARNING\n";}}
        else if (choice == 3) {
            int count = 0;
            for (int i = 0; i < size; i++) {
                if (arr[i]->getTrips() == 0) count++;}
            cout << "Cards with 0 uses: " << count << "\n";}
        else if (choice != 0 && choice != -1) {
            cout << "DEBIL WARNING\n";}
    } while (choice != 0);
    return 0;}
