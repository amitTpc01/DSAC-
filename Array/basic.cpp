#include <iostream>
using namespace std;

int main() {

    // Type 1: Declaration and Initialization during declaration
    int arr1[5] = {5, 2, 3, 4, 9}; // Creates an array of size 5 and initializes it with given values
    cout << "Access through direct index: " << arr1[2] << endl;

    // Type 2: Declaration without Initialization
    int arr2[5]; // Creates an array of size 5, uninitialized elements will contain garbage values

    // Type 3: Partial Initialization
    int arr3[5] = {1, 2}; // First two elements are initialized, the rest are set to 0

    // Type 4: Declaration with implicit size
    int arr4[] = {10, 20, 30, 40, 50}; // Size is determined automatically by the number of elements provided

    // Type 5: Using a loop to initialize an array
    int arr5[5];
    for (int i = 0; i < 5; i++) {
        arr5[i] = i * 10; // Assigning values to the array elements
    }

    // Printing the arrays
    cout << "arr1: ";
    for (int i = 0; i < 5; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;

    cout << "arr2: ";
    for (int i = 0; i < 5; i++) {
        cout << arr2[i] << " "; // May print garbage values
    }
    cout << endl;

    cout << "arr3: ";
    for (int i = 0; i < 5; i++) {
        cout << arr3[i] << " "; 
    }
    cout << endl;

    cout << "arr4: ";
    for (int i = 0; i < 5; i++) {
        cout << arr4[i] << " ";
    }
    cout << endl;

    cout << "arr5: ";
    for (int i = 0; i < 5; i++) {
        cout << arr5[i] << " "; 
    }
    cout << endl;

    return 0;
}
