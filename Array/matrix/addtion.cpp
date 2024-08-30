#include <iostream>
using namespace std;

int main() {
    int rows = 2; // Number of rows
    int cols = 2; // Number of columns

    int A[2][2];
    int B[2][2];
    int C[2][2]; // Resultant matrix

    // Input for Matrix A
    cout << "Enter elements of Matrix A:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> A[i][j];
        }
    }

    // Input for Matrix B
    cout << "Enter elements of Matrix B:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> B[i][j];
        }
    }

    // Compute Matrix Sum
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            C[i][j] = A[i][j] + B[i][j];
        }
    }

    // Output the Resultant Matrix
    cout << "Sum of Matrix A and Matrix B is:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
