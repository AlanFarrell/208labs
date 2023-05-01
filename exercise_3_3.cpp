#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

//declares function
double *max_find(double *array, int len_arr);

int main() {
    int size;
    //declares size so user can input how long they wish the array to be
    cout << "please enter how long you wish the array to be:";
    cin >> size; // adding user input to size
    double arr[size];


    //for loop of user declared size to add the users ints to array
    for (int i = 0; i < size; i++) {
        int hold;
        cout << endl << "please enter int" << i + 1 <<": ";
        cin >> hold;
        arr[i] = hold;
    }


    //declares pointer v to call function
    double *v;
    //calls function
    v = max_find(arr, size);
    //prints results in formatted manner
    cout<<"the max digit was:" << v[1] << " found at index:" << v[0] + 1<<endl;

    //deletes results returned from function to free up memory dynamically
    delete v;
    return 0;


}

double *max_find(double *array, int len_arr) {
    //declares variable for index and highest val
    double max_element;
    double max_position;
    //dynamically allocates new memory to the array that will be returned
    double *data;
    data = new double[2];

    //cycles through each int of array
    //if array[i] is bigger than max_element, hold becomes array[i] and max position becomes i.
    for (int i = 0; i < len_arr; i++) {
        if (array[i] > max_element) {
            max_element = array[i];
            max_position = i;
        }
    }

    data[0] = max_position;
    data[1] = max_element;    //adding index and value to array
    //returns the array from function.
    return data;
}
