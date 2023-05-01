#include <iostream>
#include <fstream>
#include <string>


using namespace std;

//creates struct
struct student {
    string name;
    float grade;
};

//function declarations
int sti(const string &str);

void sort(struct student array[], int x);

int main() {
    //for later use when creating a random int
    srand(time(0));
    string line1;
    int size;

    ifstream ee208("ee208.txt"); //opening file to be read from

    if (ee208.is_open()) {
        //getting first line of txt file
        getline(ee208, line1);
    }

    //converting the first line (56) from a string to int
    size = sti(line1);

    //creates an array of structs
    auto *grades = new student[size];

    //reads through each line of txt file and appends it to array
    if (ee208.is_open()) {
        int i = 0;
        string lines;
        while (getline(ee208, lines)) {
            //appending to the array of names
            grades[i].name = lines;
            i++;
        }
        //closing file as it is no longer needed
        ee208.close();

        //adding random grades to file
        for (int i = 0; i < size; i++) {
            grades[i].grade = rand()%101;
        }

        //calling the sort function
        sort(grades, size);

        //printing the contents of the array of structs
        for (int i = 0; i < size; i++) {
            cout << grades[i].name << endl;
            cout << grades[i].grade << endl;

        }

    }
}

//function that will convert a string to an int
int sti(const string &str) {
    int result = 0;
    int sign = 1;
    for (char c: str) {
        if (c == '-') {
            sign = -1;
        } else if (isdigit(c)) {
            result = result * 10 + (c - '0');
        }
    }
    return result * sign;
}

//bubble sort algorithm
void sort(struct student array[], int x) {
    string temp;
    int hold;  //temporary hold for elements in array
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x - 1; j++) {
            if (array[j].grade < array[j + 1].grade) {
                //simply swaps the i element with the next smallest element in the array
                //once it has found the smaller int the names can too be swapped in the same manner
                hold = array[j].grade;
                temp = array[j].name;
                array[j].grade = array[j + 1].grade;
                array[j].name = array[j+1].name;
                array[j + 1].grade = hold;
                array[j+1].name = temp;
            }
        }
    }
}


