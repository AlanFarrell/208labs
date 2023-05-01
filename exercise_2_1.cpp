#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    int rolls;
    int sum;
    int count[11] = {0};
    int counter = 2;
    float percent;

    cout << "Please enter the number of times you wish to roll the dice: ";
    cin >> rolls;
    int total[rolls];
    srand(time(0));

    for (int i = 0; i < rolls; i++) {
        //rolls two random dice
        int x = rand() % 6 + 1;
        int y = rand() % 6 + 1;

        //combines the two dice rolls to one int
        //then adds these ints to an array
        sum = x + y;
        total[i] = sum;
    }

    for (int j = 0; j < rolls; j++) { //iterates over an array of 11 0s
        //every time a specific int (eg 2) in "total[rolls]" is found then a corresponding 0 in the array "counts" goes +1
        count[total[j] - 2]++;
    }

    cout << "Dice number" << setw(20) << "Total rolls" << setw(20) << "Percent rolled" << endl;
    for (int i = 0; i < 11; i++) {
        //uses variables i, percent and counter
        //i iterates over the array "count" and is used to print the values
        //percent is used to do the maths to find the percent of times each number is rolled
        //counter is used to count from 2-12 as these are all the possible options for rolling two dice
        percent = count[i];
        percent = (percent/rolls)*100;
        //printed in a tabulated format
        cout << setw(10) << counter << setw(20) << count[i] << setw(20) << setprecision(5) << percent << "%" << endl;
        counter++;
    }
}

