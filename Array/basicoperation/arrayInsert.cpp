#include <iostream>
using namespace std;

// Function to traverse the array
void traverse(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// Function to insert an element at a specific position
void insert(int arr[], int& n, int element, int position) {
    if (position < 0 || position > n) {
        cout << "Invalid position" << endl;
        return;
    }
    
    // Shifting elements to the right to make space for the new element
    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }
    
    arr[position] = element;
    n++;  // Increase the size of the array
}

// Function to delete an element from a specific position
void deleteElement(int arr[], int& n, int position) {
    if (position < 0 || position >= n) {
        cout << "Invalid position" << endl;
        return;
    }
    
    // Shifting elements to the left to fill the gap
    for (int i = position; i < n - 1; i++) {
        arr[i] = arr[i + 1];
    }
    
    n--;  // Decrease the size of the array
}
int main() {
    int arr[10] = {10, 20, 30, 40, 50};  // Example array with size 10
    int n = 5;  // Current number of elements in the array
    
    cout << "Array before operations: ";
    traverse(arr, n);
    
    // Insert operation
    insert(arr, n, 25, 2);  // Insert 25 at position 2
    cout << "Array after insertion: ";
    traverse(arr, n);
    
    // Delete operation
    deleteElement(arr, n, 4);  // Delete element at position 4
    cout << "Array after deletion: ";
    traverse(arr, n);
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void insertElement(int A[],int &N,int K,int ITEM){
    int J=N;
    while(J>=K){
        A[J+1]=A[J];
        J--;
    
    }
        A[K]=ITEM;
        N++;
}

int main() {
    int A[5]={1,2,3,4};
    int N=4;
    int K=2;
    int ITEM=8;
    insertElement(A,N,K,ITEM);
    cout << "update element after insertion"<<endl;
    for(int i=0;i<N;i++){
        cout<<A[i]<<""<<endl;
    }

    return 0;
}