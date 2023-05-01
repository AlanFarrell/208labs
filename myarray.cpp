#include "myarray.h"

//constructor
my_array::my_array(int size) : n(size) {
    //dynamically creates an array of length n
    ptr = new int[n];
}

void my_array::setRandom() {
    srand(time(nullptr));
    //iterates over each value in an array of len n
    //adds a random value to each index of array
    for (int i = 0; i < n; i++) {
        int random;
        random = rand() % 100;
        ptr[i] = random;
    }
}

void my_array::setValue(int index) {
    //prompting user for input
    cout << "what would you like the new value to be?";
    int hold;
    cin >> hold;
    //at the user given index replacing the value
    ptr[index] = hold;
}

int my_array::getValue(int index) {
    //at user passed in index function returns array value
    return ptr[index];
}


my_array my_array::operator+(const my_array &ab) {
    //finding total needed length of arrays
    int len = ab.n + n;

    //creating an array using dynamic memory allocation of length len
    my_array sum(len);
    sum.ptr = new int[len];


    //given equation c[5] = a[3] + b[2]
    // c[1], c[2], c[3] = a[1], a[2], a[3] respectively
    for (int i = 0; i < n; i++){
        sum.ptr[i] = ptr[i];
    }


    //given equation c[5] = a[3] + b[2]
    // c[3], c[4] = b[1], b[2] respectively
    int j = 0;
    for (int i = n; i < len; i++){
        sum.ptr[i] = ab.ptr[j];
        j++;
    }
    return sum; //returning the concatenated array
}

void my_array::push(int newValue) {
    n = n + 1; //n is now 1 greater than what it initially was
    //this creates space at end of array
    ptr[n-1] = newValue; //as array starts at index 0 values are added at n-1
}

void my_array::print() {
    //iterates over element of an array and prints the value to terminal
    for (int i = 0; i < n; i++) {
        cout << ptr[i];
        if (i < n - 1) {
            cout << ":";
        }
    }
    cout << endl;
}


//destructor to free memory
my_array::~my_array() {
    delete[] ptr;
}


int array() {
    //prompting user to define length of array
    cout << "enter the length of the first array:";
    int z;
    cin >> z;
    cout << endl;

    //initialising an array of type my_array of len z
    my_array x{z};

    //initialising all elements of x to a random value
    x.setRandom();

    //printing array of random ints
    cout <<"your array filled with random ints:" << endl;
    x.print();

    //prompting the user to select an element to replace in the array
    cout << "select which value between 1 and " << z << " to set the value" << endl;
    int index;
    cin >> index;
    //array starts at element 0, for array of len 5 elements go from 0-4
    //prompt asked for input between 1-5 to make request more human friendly
    index = index - 1;

    //calling this set function and passing the user inputted index as parameter
    x.setValue(index);
    //calling print function to print edited array
    x.print();


    //prompting users to enter a index to find the value of array at that index
    cout << "select a value between 1 and " << z << " to print to the terminal" << endl;
    cin >> index;
    index = index - 1;
    //printing relevant data
    cout << "at index " << index + 1 << " the value is:" << x.getValue(index) << endl;

    return 0;
}


