#include <iostream>
#include <algorithm>


using namespace std;

int main() {
    int arr[10]; //establishing an array
    int hold = 0; // establishing a temporary hold for highest int
    int index; // index in array of the highest int


    //this for loop adds 10 random ints to arr[10]
    srand(time(0));
    for (int i = 0; i <10; i++){
        arr[i] = rand()%  100 + 1;
    }

    //prints array in formatted manner
    cout << "array:";
    for (int i = 0; i < 10; i++){
        cout << arr[i] << " ";
    }


    //cycles through each int of array
    //if arr[i] is bigger than hold, hold becomes arr[i]
    for (int i = 0; i <10; i++){
        if(arr[i] > hold){
            hold = arr[i];
            index = i+1;
        }
    }
    //prints results
    cout << endl << "at index:" << index << " the largest int was:" << hold << endl;

}
