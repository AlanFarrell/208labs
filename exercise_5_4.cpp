#include <iostream>
#include <string>
#include <cmath>

using namespace std;


class complex {
private:
    float real, imag;
public:
    //same initialiser as previous questions
    complex() : real(0), imag(0) {};
    //same set val as previous questions
    void setVal(float Re, float Im) {
        real = Re;
        imag = Im;
    }

    //same print function as previous questions
    void print() const{
        cout << real;
        if (imag > 0) {
            cout << "+";
        }
        cout << imag << "j" << endl;
    }

    //same conjugate function as previous
    void conjugate() {
        imag = -imag;
    }
};

//this is a new class
class OneDComplexMatrix {
private:
    int size;
    complex *x;
public:
    //using explicit to tell compiler that no implicit conversions needed
    //establishing a 1d matrix/array of type OneDComplexMatrix and inputted size
    explicit OneDComplexMatrix(int arrSize) : size(arrSize), x(new complex[size]) {};

    //new conjugate function
    void conj(int N) { //passes in amount of complex numbers
        cout << endl << "==========conjugates==========" << endl;
        for (int i = 0; i < N; i++) {
            //passes each complex number into previously defined complex function
            x[i].conjugate();
            //calling print function for each iteration of 1d matrix
            x[i].print();
        }
    }

    //new setvalue function
    void setValues(int n) {
        //this works much the same as the new conjugate function
        //passes values of the complex matrix into an abstracted function in our previous class
        //these functions are the setVal function and print function
        srand(time(NULL));
        for (int i = 0; i < n; i++) {
            //filling this array with random values from -100 to 100
            float real = rand() % 201 - 100;
            float imag = rand() % 201 - 100;
            x[i].setVal(real, imag);
            x[i].print();
        }
    }
    //destructor to free up memory
    ~OneDComplexMatrix(){
        delete[] x;
    }
};


int main() {
    //prompting user to input how many complex nums they would like
    int size;
    cout << "enter how many complex nums you would like:";
    cin >> size;

    //calls necessary functions
    OneDComplexMatrix z{size};
    z.setValues(size);
    z.conj(size);
    return 0;
}

