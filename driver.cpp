#include "Resistor.h"
#include "circuit.h"




int driver(){
    cout << endl << "==========Part 1==========" << endl;

    //creating resistor 'A' and 'B' and relevant data
    int current = 2;
    int volts = 5;
    resistor A{10}, B{};

    //calling function which will prompt user to set the resistance of 'B'
    double x = B.setVal();

    //neatly printing all relevant data for resistor 'A'
    cout << endl << "Resistor A - 2 amps, 5 volts, 10 omhs" <<endl;
    cout << "current(amps):" << A.current(volts) << endl;
    cout << "voltage(volts):" << A.volts(current) << endl;
    cout << "power(watts):"<< A.power(current) << endl;

    //neatly printing all relevant data of resistor 'B'
    cout << endl << "Resistor B - 2 amps, 5 volts, " <<  x << " omhs" <<endl;
    cout << "current(amps):" << A.current(volts) << endl;
    cout << "voltage(volts):" << A.volts(current) << endl;
    cout << "power(watts):"<< A.power(current) << endl;

    return 0;
}


int array(){
    //prompting user to enter how many resistors they would like to create
    cout << endl << "Random resistor values will be added to an array";
    cout << endl << "Enter how many resistor values you would like to add to this array:";
    int n;
    cin >> n;

    //using dynamic memory allocation creating an array of size n
    resistor *arr = new resistor[n];
    cout << "your resistors will be printed below";
    //setting the values of this array and then printing these values
    arr->setRandom(n);
    arr->print(n);


    cout << endl << endl << "==========Part 2==========";
    cout << endl << "Total Resistors currently active in main:"<< resistor::count;
    cout << endl << "All resistors will now be deleted";

    //freeing memeory and printing how many resistors are current in use
    resistor clear;
    clear.clearMemory(resistor::count);
    cout << endl << "Total resistors now active in main:" << resistor::count;


    //creating two resistors and finding their summed value
    //this summed value is their value in a series circuit
    cout << endl << endl << "resistor x and y have been created";
    cout << endl << "x = 5 ohm" << endl << "y = 3 ohm";

    //declaring resistors
    resistor x{5},y{3};

    //declaring z as function series returns a double
    double z;
    //calling function
    z = series(x,y);
    cout << endl << "x and y in series:" << z << " ohms";
    return 0;
}

int circuits(){
    cout <<endl << endl << "==========Part 3==========";

    //prompting user to create x amount of resistors
    cout << endl << "enter number of resistors to create:";
    int x;
    cin >> x;
    cout << endl << "your resistors will be printed below";

    //creating array of x resistors through circuit class/constructor
    circuit y{x};
    //printing these values
    y.printCircuit(x);
    cout << endl << resistor::count << " resistor(s) have/has been made";

    return 0;
}