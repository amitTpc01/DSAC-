#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    
    int arr[n];
    
    // Input the elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  // Accept user input for each element
    }
    
    // Print the original array
    cout << "Original array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    // Reverse the array
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    
    // Print the reversed array
    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
