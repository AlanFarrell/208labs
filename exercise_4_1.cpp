#include <iostream>
#include <algorithm>
#include<cmath>

using namespace std;

//creating struct
typedef struct complexNum {
    float i;
    float real;
} complex;

//defining functions
double mod(complex x);

complexNum conjugate(complex x);

complex add(complex x, complex y);

complex product(complex x, complex y);

int main() {
    //creating variables to be used later
    const char *sign0, *sign1;
    complex num0, num1, num2, conjugated, added, multiplied;
    double modulus;

    //prompting user for an input and appending to variable
    cout << "enter your complex number:";
    cin >> num0.real >> num0.i;

    //calling modulus function
    modulus = mod(num0);

    //calling conjugate function
    conjugated = conjugate(num0);

    //finding if the complex num returned is positive or negative
    //uses
    sign0 = conjugated.real > 0 ? "" : "-";
    sign1 = (conjugated.i > 0) ? "+" : "";


    //printing results
    cout << "modulus:" << modulus;
    cout << endl << "Complex conjugate:" << sign0 << conjugated.real << sign1 << conjugated.i << "j";

    //printing results
    cout << endl << "please enter the first of the two complex numbers you would like to add and multiply:";
    cin >> num1.real >> num1.i;
    cout << endl << "please enter the second of the two complex numbers you would like to add and multiply:";
    cin >> num2.real >> num2.i;

    //printing results
    added = add(num1, num2);
    sign0 = (added.real > 0) ? "" : "-";
    sign1 = (added.i > 0) ? "+" : "";
    cout << "the sum of your two complex numbers is:" << sign0 << added.real << sign1 << added.i << "j";

    //calling function to multiply the complex number
    multiplied = product(num1, num2);
    sign0 = (multiplied.real > 0) ? "" : "-";
    sign1 = (multiplied.i > 0) ? "+" : "";
    //printing results
    cout << endl << "the product of your two complex numbers is:" << sign0 << multiplied.real << sign1 << multiplied.i
         << "j";
    return 0;
}


//funcgion to find modulus
double mod(complex x) {
    double temp;
    complex hold;
    //finds square root of real and complex values squared and added
    temp = sqrt(pow(x.real, 2) + pow(x.i, 2));
    return (temp);
}

//function to find the complex conjugate
complexNum conjugate(complex x) {
    //swaps sign of imaginary number
    //+ becomes - and - becomes +
    complex hold;
    hold.real = x.real;
    hold.i = -1 * (x.i);
    return hold;
}

complex add(complex x, complex y) {
    complex hold;
    //adds the real and real aspects as well as the imaginary and imaginary aspects
    hold.real = x.real + y.real;
    hold.i = x.i + y.i;
    return hold;
}

complex product(complex x, complex y) {
    complex hold;
    //(+-a1+-b1i)(+-a2+-b2i) = +-a1a2 +-(a1b21+-a2b1i) +-(b1ib2i)
    hold.real = (x.real * y.real) + (-1 * (x.i * y.i));
    hold.i = (x.real * y.i) + (y.real * x.i);
    return hold;

}