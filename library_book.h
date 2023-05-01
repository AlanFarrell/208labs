#ifndef LAB8_LIBRAY_H
#define LAB8_LIBRAY_H

#include <string>
#include <iostream>

#include "book.h"
using namespace std;

class library_book : public book {
private:
    bool loan;
public:

    library_book();

    void check_in();

    void check_out();
};


#endif //LAB8_LIBRAY_H
