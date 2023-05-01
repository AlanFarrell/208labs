3#include <iostream>
#include <cmath>

using namespace std;


//defining the class
class complex {
private:
    float real, imag;
public:
    complex() : real(0), imag(0) {}; //initialising the values to 0

    //using a constructor to initialise any complex values passed in are stored as a complex num
    void setVal(double a, double b) {
        real = a;
        imag = b;
    }

    //prints out the complex nums, uses quick if statement to sign the output
    void print() const {
        cout << endl << real;
        if (imag > 0) {
            cout << "+";
        }
        cout << imag << "j";
    }


    //[[nodiscard]] and const serve the same purpose as the previous question
    [[nodiscard]] float arg() const {
        //same formula as previous - arctan(i/real)
        return (atan2(imag, real));
    }

    [[nodiscard]] float mod() const {
        //same formula as previous question
        float x = pow(real, 2) + pow(imag, 2);
        x = sqrt(x);
        return x;
    }

    void conj() {
        //simply swapping the value of the imaginary number
        imag = -imag;
        cout << "conjugate:" << real;
        if(imag > 0){
            cout << "+";
        }
        cout  << imag << "j"<< endl;
    }
};


int main() {
    double r,i;
    complex x;

    //prompting user for inputs
    cout << "enter the real value:";
    cin >> r;
    cout << endl << "enter the imaginary value:";
    cin >> i;

    //calling functions in the public and printing them
    x.setVal(r, i);
    x.print();

    //printing multiple things to make everything look nice
    cout << endl << "radians:" << x.arg() << endl << "degrees:" << x.arg() * (180 / M_PI) << endl;
    cout << "modulus:" << x.mod() << endl;
    x.conj();

    return 0;
}

