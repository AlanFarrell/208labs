#include <iostream>
#include <algorithm>


using namespace std;

//declaring struct
struct info {
    int ages;
    string name;
};

int main(){

    int size;
    //prompting usr to input number of names to enter
    cout << "how many names/ages would you like to enter?" << endl;
    cin >> size;
    info *data = new info[size];
    for (int i = 0; i<size; i++){
        //prompting user to input names and ages and then appending to array
        cout << "please enter the users name:";
        getline(cin >> ws, data[i].name);
        cout << endl << "please enter their age:";
        cin >> data[i].ages;
        cout << endl;
    }
    for (int i = size-1; i>=0; i--){
        //printing all the elements of array of structs
        cout << data[i].name << ":" << data[i].ages;
        cout << endl;
    }
    delete[] data;
}