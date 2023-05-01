#include <iostream>
#include <cmath>

using namespace std;

//declaring the class
class complex {
private:
    float real, imag;
public:
    //this initialises the real and imag to 0
    complex() : real(0), imag(0) {};
    //same setval function as previous question
    void setVal(double a, double b) {
        real = a;
        imag = b;
    }
    //same print function as previous question
    void print() const {
        cout << endl << real;
        if (imag > 0) {
            cout << "+";
        }
        cout << imag << "j";
    }

    //this is the same argument function as previous
    [[nodiscard]] float arg() const {
        return (atan2(imag, real));
    }

    //same modulus function as previously explored
    [[nodiscard]] float mod() const {
        float x = pow(real, 2) + pow(imag, 2);
        x = sqrt(x);
        return x;
    }

    //same conjugate function as previously explored
    void conj() {
        imag = -imag;
    }

    //here i am overloading the + operater to deal with complex nums
    complex operator+(complex const &a) const {
        complex result;
        //real + real
        result.real = real + a.real;
        //imaginary + imaginary
        result.imag = imag + a.imag;
        return result;
    }

    //overloading the * operator to handle imaginary numbers
    complex operator*(complex &a) const {
        complex result;
        result.real = (a.real * real) + ((a.imag * imag)*-1);
        result.imag = (real*a.imag)+(a.real*imag);
        return result;
    }
};


int main() {
    //declaring variables (woooooo)
    double r, i, r1, i1;
    complex x, y, sum, product;

    //this block is all prompts for the user to inputs values
    cout << "enter the real value:";
    cin >> r;
    cout << endl << "enter the imaginary value:";
    cin >> i;
    cout << "enter the second real value:";
    cin >> r1;
    cout << endl << "enter the second imaginary value:";
    cin >> i1;


    //this block is initialising the values to complex nums
    x.setVal(r, i);
    y.setVal(r1, i1);

    //this section of the code just prints the original unmodified complex nums inputted by the user
    cout << "First complex num:";
    x.print();
    cout << endl << "Second complex num";
    y.print();


    //printing the argument and modulus of the first complex number inputted by the user
    cout << endl << "=====complex num 1 =====" << endl;
    cout << endl << "radians:" << x.arg() << endl << "degrees:" << x.arg() * (180 / M_PI) << endl;
    cout << "modulus:" << x.mod() << endl;


    //printing the argument and modulus of the second complex number inputted by the user
    cout << endl << "=====complex num 2 =====" << endl;
    cout << endl << "radians:" << y.arg() << endl << "degrees:" << y.arg() * (180 / M_PI) << endl;
    cout << "modulus:" << y.mod() << endl;


    //calling the overloaded +/* operator and printing the results
    sum = x + y;
    product = x * y;
    cout << endl << "The sum of your complex nums:";
    sum.print();
    cout << endl << "The product of your complex nums:";
    product.print();

    //calling the conjugate function and printing the results
    x.conj();
    y.conj();
    cout << endl << "The complex conjugate of your first complex num:";
    x.print();
    cout << endl << "The complex conjugate of your second complex num:";
    y.print();
    cout << endl;
    return 0;
}

