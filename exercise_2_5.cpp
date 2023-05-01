#include <iostream>
#include <iomanip>
using namespace std;


int main(){
    double list[5];

    for(int i = 0; i<5; i++){
        double x;
        cout << setprecision(15) << "please enter a number\n";
        //requests 5 numbers
        //assigns number to variable
        cin >> x;
        //adds variable to array
        list[i] = x;
    }

    for(int i = 4; i>=0;i--){
        //iterates over array in reverse order
        //prints each number
        cout << list[i] << " - ";
    }
}
