#include <iostream>

#ifndef LAB6V2_MYARRAY_H
#define LAB6V2_MYARRAY_H

using namespace std;

//declaring class and class members
class my_array {
private:
    int *ptr{};
    int n{};
public:
    //declaring class member functions
    my_array(int size);
    //used to set n{} values to a random val
    void setRandom();

    //used to manually set an n{} val
    void setValue(int size);

    //used to get value at a given index from an array
    int getValue(int index);

    //overloaded operator
    my_array operator+(const my_array &b);

    //pushes an int to the end of array
    void push(int newValue);

    //print function
    void print();

    //destructor declaration
    ~my_array();
};


#endif //LAB6V2_MYARRAY_H
