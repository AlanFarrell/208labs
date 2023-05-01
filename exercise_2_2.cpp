#include <iostream>
using namespace std;


int swap(int &a, int &b){
    //takes in two ints
    //holds onto one of these variables
    //reassigns a to b
    //then reassigns hold to b
    int hold;
    hold = a;
    a = b;
    b = hold;
    return 0;
}

int main(){
    int x;
    int y;
    //requests int input and then assigns it to x and y
    cout << "please enter your first int";
    cin >> x;
    cout << "please enter your second int";
    cin >> y;
    cout << "you entered " << x << " and " << y <<"\n";
    //calls function
    swap(x,y);
    cout << "Your ints swapped are " << x << " and " << y;
}
