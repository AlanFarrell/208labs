#include <iostream>
#include <cmath>

using namespace std;


//establishing class
class complex {
public:
    //data types
    float real, imag;

    void conj() {
        imag = -imag;
    }
    //using [[nodiscard]] to tell the compiler not to discard the return data
    //using const as the function does not modify the values being passed in
    [[nodiscard]] float arg() const {
        //using the formala - arctan(i/real)
        return (atan2(imag, real));
    }

    [[nodiscard]] float mod() const{
        //square root of real^2 + imaginary^2
        float x = pow(real, 2) + pow(imag, 2);
        x = sqrt(x);
        return x;
    }
};


int main() {
    //creating variable x to call functions with
    complex x{};


    //lots of fun print statments to make verything look nice
    cout << "enter value for the real:";
    cin >> x.real;
    cout << endl << "enter value for the imaginary aspect:";
    cin >> x.imag;
    cout << endl;

    //this prints the argument in degrees and radians (oooooooo exciting)
    cout << "radians:" << x.arg() << endl << "degrees:" << x.arg()*(180/M_PI) << endl;
    cout << "modulus:" << x.mod() << endl;
    x.conj();
    cout << "conjugate:" << x.real;
    if(x.imag > 0){
        cout << "+";
    }
    cout  << x.imag << "j" << endl;
    return 0;
}


