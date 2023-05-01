#ifndef LAB7_RESISTOR_H
#define LAB7_RESISTOR_H

#include <iostream>

using namespace std;

//declaring class
class resistor {
private:
    double R{};
    double *n{};
public:
    //declaring all constructors/methods/functions
    static int count;

    explicit resistor(double val);

    resistor();

    double setVal();

    void setRandom(int length);


    //nodiscard ensuring function return value is not discarded until declared ie destructor
    //const ensures compiler does not alter return value
    [[nodiscard]] double current(double voltage) const;

    [[nodiscard]] double volts(double current) const;

    [[nodiscard]] double power(double current) const;

    void print(int length) const;

    friend double series(resistor r1, resistor r2);


    //this function is not called
    //this is another potential solution instead of using a friend function
    double resistorSeries(resistor r1, resistor r2);

    //declaring destructor
    ~resistor();

    void clearMemory(int len);
};




#endif //LAB7_RESISTOR_H
