#ifndef LAB7_CIRCUIT_H
#define LAB7_CIRCUIT_H


class circuit {
private:
    resistor *ptr{};
public:
    //constructor
    explicit circuit(int N);

    //default constructor
    explicit circuit();

    //function to print member variables
    void printCircuit(int len);

    //destructor
    ~circuit();
};


#endif //LAB7_CIRCUIT_H
