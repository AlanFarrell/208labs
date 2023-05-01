#include <iostream>
using namespace std;

void swaps(int &a, int &b, bool v=false){
    //takes in two ints and a bool
    //holds onto one of these variables
    //reassigns a to b
    //then reassigns hold to b
    //if bool is passed through as true it will print a confirmation message
    int hold;
    hold = a;
    a = b;
    b = hold;
    if (v){
        cout << "Swaps int was called\n";
    }
}

void swaps(float &a, float &b, bool v = false){
    //takes in two float and a bool
    //holds onto one of these variables
    //reassigns a to b
    //then reassigns hold to b
    //if bool is passed through as true it will print a confirmation message
    float hold;
    hold = a;
    a = b;
    b = hold;

    if (v){
        cout << "Swaps float was called\n";
    }
}

void swaps(char &a, char &b, bool v = false){
    //takes in two chars and a bool
    //holds onto one of these variables
    //reassigns a to b
    //then reassigns hold to b
    //if bool is passed through as true it will print a confirmation message
    char hold;
    hold = a;
    a = b;
    b = hold;

    if (v){
        cout << "Swaps char was called\n";
    }
}

int main(){
    int x1,y1;
    float x2,y2;
    char x3,y3;

    //requests int input and then assigns it to x and y
    cout << "please enter your first int";
    cin >> x1;
    cout << "please enter your second int";
    cin >> y1;
    cout << "you entered " << x1 << " and " << y1 << "\n";
    //calls function
    swaps(x1, y1, true);
    cout << "Your ints swapped are " << x1 << " and " << y1;

    //requests int input and then assigns it to x and y
    cout << "please enter your first float";
    cin >> x2;
    cout << "\n" << "please enter your second float";
    cin >> y2;
    cout << "\n" << "you entered " << x2 << " and " << y2 << "\n";
    //calls function
    swaps(x2,y2, true);
    cout << "Your floats swapped are " << x2 << " and " << y2 << "\n" ;

    //requests int input and then assigns it to x and y
    cout << "please enter your first char";
    cin >> x3;
    cout << "please enter your second char";
    cin >> y3;
    cout << "you entered " << x3 << " and " << y3 << "\n";
    //calls function
    swaps(x3, y3,true);
    cout << "Your chars swapped are " << x3 << " and " << y3;

}
