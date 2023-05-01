#include <iostream>
#include <algorithm>


using namespace std;

double *matrixMultiply(double matrix1[4][4], double matrix2[4][4]);
double print_matrix(double matrix[4][4]);

int main() {
    //declaring matrix1 (m1)
    double m1[4][4] = {1, 5, 6, 9,
                       12, 14, 3, 7,
                       3, 4, 16, 19,
                       9, 4, 12, 5};

    //declaring matrix2 (m2)
    double m2[4][4] = {3, 4, 6, 8,
                       6, 13, 14, 1,
                       15, 16, 19, 7,
                       6, 9, 3, 12};

    //printing original matrices
    cout << "matrix 1:" << endl;
    print_matrix(m1);
    cout << "matrix 2:" << endl;
    print_matrix(m2);

    //declaring pointer x to later call a function
    double *x;
    //calling the function
    x = matrixMultiply(m1, m2);
    //dynamic memory allocation: deleting x in order to free up memory
    delete x;
}


double *matrixMultiply(double matrix1[4][4], double matrix2[4][4]) {
    double m3[4][4];
    int hold;

    //this function iterates over each matrix
    //given a 4x4 matrix it will multiply the top row of matrix 1 by each collumn of matrix 2
    //after the function multiplies each element in column 1 by the corresponding element in row 1 it will add these values together
    //this function then adds these values to their corresponding location in a new matrix (m3)
    cout << "matrix 1 x matrix2:" << endl;
    for (int i = 0; i < 4; i++) {
        for (int k = 0; k < 4; k++) {
            hold = 0;
            for (int j = 0; j < 4; j++) {
                hold += matrix1[i][j] * matrix2[j][k];
            }
            m3[i][k] = hold;
        }
    }

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << m3[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

double print_matrix(double matrix[4][4]){
    //this is a function to print the original matrices in a formatted manner
    //simply iterates over each value of the matrix and prints to terminal
    for(int i = 0; i <4; i++){
        for (int j = 0; j<4; j++){
            if (matrix[i][j] < 10){
                cout << " ";
            }
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}

