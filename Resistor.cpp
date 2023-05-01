#include "Resistor.h"


//test case to see if srand has been called
//done to prevent same seed from being called multiple times
//SetRandom being called multiple times can cause repeatable "random" ints
bool testCase = false;

int resistor::count = 0;


//constructor where resistance is manually set
resistor::resistor(double r) : R(r) {
    //iterating count to keep track of how many resistors are being created
    count++;
}

//default constructor
resistor::resistor() : R(0) {
    //iterating count to keep track of how many resistors are being created
    count++;
}

void resistor::setRandom(int length) {
    //using dynamic memory allocation to create an array of n{}
    n = new double[length];

    //checking if srand has been called before
    //preventing same seed being created multiple times
    if (!testCase) {
        srand(time(nullptr));
        testCase = true;
    }

    //adds random ints to array of n{}
    for (int i = 0; i < length; i++) {
        n[i] = rand() % 1000;
    }
}

double resistor::setVal() {
    //prompts user to enter a value for resistor 'B'
    cout << "For resistor 'B' enter the value of the resistor in ohms:";
    int val;
    cin >> val;
    R = val;

    //returns user inputted val
    return val;
}

double resistor::current(double voltage) const {
    // v = ir -> i = v/r
    double i = voltage / R;
    return i;
}

double resistor::volts(double current) const {
    //v = ir
    double v = current * R;
    return v;
}

double resistor::power(double current) const {
    // p = vi
    double p = volts(current) * current;
    return p;
}

void resistor::print(int length) const {
    //iterates over every instance of n{} and prints
    for (int i = 0; i < length; i++) {
        cout << endl << n[i] << " ohms";
    }
}

double series(resistor r1, resistor r2) {
    //sums the R or resistance value of resistors passed in as parameters
    resistor r3{};
    r3.R = r1.R + r2.R;
    return r3.R;
}

double resistor::resistorSeries(resistor r1, resistor r2) {
    //does same as previous function except this is not a friend function
    //this function is not called in driver as friend function is called
    resistor r3{};
    r3.R = r1.R + r2.R;
    return r3.R;
}

void resistor::clearMemory(int len){
    //used to dynamically clear memory and reset count value
    delete[] n;
    count = 0;
}

resistor::~resistor() {
    //destructor
    delete[] n;
    n = nullptr;
    count--;
}