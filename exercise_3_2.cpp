#include <iostream>
#include <algorithm>

using namespace std;

//calls function
double *max_find(double *array);

int main() {
    double arr[10];//declares array

    //adds 10 random ints to array
    srand(time(0));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 100 + 1;
    }


    //prints full array to terminal
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }


    //declares a pointer v so we can later delete
    double *v;
    //using v to call function
    v = max_find(arr);
    cout << endl << "the max digit was:" << v[1] << " found at index:" << v[0] + 1 << endl;
    //dynamic memory allocation to delete function and save on memory
    delete v;
    return 0;
}

//function takes in array
double *max_find(double *array) {
    //declares variable for index and highest val
    double max_element;
    double max_position;
    //dynamically allocates new memory to the array that will be returned
    double *data;
    data = new double[2];

    //cycles through each int of array
    //if array[i] is bigger than max_element, hold becomes array[i] and max position becomes i.
    for (int i = 0; i < 10; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
            max_position = i;
        }
    }

    data[0] = max_position;
    data[1] = max_element;
    //adding index and value to array
    return data; //returns array
}
