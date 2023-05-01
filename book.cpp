#include "libray.h"
#include "book.h"
#include <string>

using namespace std;

book::book() {

}

book::book(string t, string a, string p, int day, int month, int year) {
    title = t;
    author = a;
    publisher = p;
    d = day;
    m = month;
    y = year;
}

void book::setval() {
    cout << endl << "enter the title of the book:";
    getline(cin, author);
    cout << endl << "enter the author:";
    getline(cin, title);
    cout << endl << "enter the publisher:";
    getline(cin, publisher);
    cout << endl << "in the form dd/mm/yyyy";
    cout << endl << "enter the date of publish:";
    cin >> d;
    cin.get();
    cin >> m;
    cin.get();
    cin >> y;
}

void book::printingPress(){
    cout << endl << "Title:" << title;
    cout << endl << "Author:" << author;
    cout << endl << "Publisher:" << publisher;
    cout << endl << "Date of publication:";
    cout << d << "/" << m << "/" << y;

}



