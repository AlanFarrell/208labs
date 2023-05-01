#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

double *concatenate(double arr1[], double arr2[], int s1, int s2);

int main() {

    //declares two arrays of an arbitrary length
    double array1[] = {4, 7};
    double array2[] = {6, 44, 89};

    //establishes size of both arrays
    int size1 = sizeof(array1) / sizeof(array1[0]);
    int size2 = sizeof(array2) / sizeof(array2[0]);
    //finds combined size
    int size3 = size1 + size2;

    cout << "array 1:";
    for (int i = 0; i <size1; i++){
        cout << array1[i] << " - ";
    }
    cout << endl;
    cout << "array 2:";
    for (int i = 0; i <size2; i++){
        cout << array2[i] << " - ";
    }
    cout << endl;

    //declares pointer x to call function
    double *x;
    //calls function
    x = concatenate(array1, array2, size1, size2);

    //prints the returned array from the function
    cout << "the concatenated string:";
    for (int i = 0; i < size3; i++) {
        cout << " - " << x[i];
    }
    cout << endl;

    //dynamically frees up memory by deleting the called function
    delete x;

}

double *concatenate(double arr1[], double arr2[], int s1, int s2) {
    int size = s1 + s2; //size of two arrays

    //creates an array using dynamic memory allocation
    double *x;
    x = new double[size];

    //for loop 1: adds each int from arr1 to newly created array
    for (int i = 0; i < s1; i++) {
        x[i] = arr1[i];
    }


    int j = 0;
    //for loop 2: adds elements of arr2 to new arry
    for (int i = s1; i < size; i++) {
        //starts at j = 0 for arr[2] in order to add the first - last element of arr[2] to new array
        //x[i] starts at s1 as to not overwrite previous data
        x[i] = arr2[j];
        j++;
    }
    //returns new array
    return x;
}
