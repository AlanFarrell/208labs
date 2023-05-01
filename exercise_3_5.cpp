#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdlib>


using namespace std;

int sort(int arr[], int len);

int main() {
    int size = 0;
    cout << "how long would you like the array to be? \n"; //asking user for length of array
    cin >> size;

    //creates array using dynamic memory allocation
    int *arr;
    arr = new int[size];

    srand(time(0));

    //adds random ints to array
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 1000 + 1;
    }

    //prints unsorted array
    cout << "your array:";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " - ";
    }

    //calls sort function
    sort(arr, size);

    //reprints array after its been sorted
    cout << "\nyour  ordered array:";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " - ";
    }
    cout << endl;
    //dynamic memory allocation-deleting in order to free up memory
    delete arr;
}

//using bubble_sort function to sort array
int sort(int array[], int len) {
    int hold;  //temporary hold for elements in array
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (array[j] > array[j + 1]) {
                hold = array[j];
                array[j] = array[j + 1];
                array[j + 1] = hold;
            }
        }
    }
    return 0;
}
