#include "libray.h"
#include "book.h"
using namespace std;



library_book::library_book() {
    loan = false;
}

void library_book::check_in() {
    cout << endl << "Proceed to check in a book" << endl;
    book check;
    check.setval();
    loan = true;
    check.printingPress();
    cout << endl << "this book is checked in";
}

void library_book::check_out() {
    cout << endl << "proceed to check out a book";
    book check;
    check.setval();
    check.printingPress();
    loan = false;
    cout << endl << "This book is checked out";

}