#include "Resistor.h"
#include "circuit.h"

//constructor to create an array of size N and initialises them to random ints
circuit::circuit(int N) {
    //creates a circuits array of type resistor
    ptr = new resistor[N];
    for (int i = 0; i < N; i++) {
        //passes each element of ptr into previous setRandom function
        ptr[i].setRandom(N);
    }
    //setting count to number of elements
    resistor::count = N;
}

//default constructor
circuit::circuit() {
    ptr = nullptr;
};

//printing function
void circuit::printCircuit(int len) {
    //works on same principle as constructor
    for (int i = 0; i < len; i++) {
        //each element is passed into a print function defined in resitor.cpp
        ptr[i].print(1);
    }
}

//destructor
circuit::~circuit() {
    delete[] ptr;
}