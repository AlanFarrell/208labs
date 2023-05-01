
#ifndef LAB8_BOOK_H
#define LAB8_BOOK_H

#include <string>
#include <iostream>

#include "libray.h"

using namespace std;

class book {
private:
    string title;
    string author;
    string publisher;
    int d{}, m{}, y{}; //date of publish - day - month - year
public:
    book(string t, string a, string p, int day, int month, int year);

    book();

    void setval();

    void printingPress();

};


#endif //LAB8_BOOK_H
