#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;       // Assign value to the node
        next = NULL;      // Set next pointer to NULL
    }
};

// Function to insert a node at the end of the list
void insertAtEnd(Node*& Head, int val) {
    Node* newNode = new Node(val); // Create a new node with the value

    if (Head == NULL) {
        // If the list is empty, assign the new node as the Head
        Head = newNode;
    } else {
        // Traverse to the end of the list
        Node* tail = Head;
        while (tail->next != NULL) {
            tail = tail->next;
        }
        // Now tail points to the last node, insert the new node at the end
        tail->next = newNode;
    }
}

// Function to print the linked list
void printList(Node* Head) {
    Node* temp = Head;
    while (temp != NULL) {
        cout << temp->data << " -> ";  // Print the data of each node
        temp = temp->next;             // Move to the next node
    }
    cout << "NULL" << endl;            // Indicate the end of the list
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};   // Array of values to insert into the linked list
    Node* Head = NULL;

    // Create the initial linked list using the values from the array
    for (int i = 0; i < 5; i++) {
        insertAtEnd(Head, arr[i]);
    }

    // Print the initial list
    printList(Head);

    // Now insert a new element at the end dynamically
    insertAtEnd(Head, 8);  // Insert 6 at the end of the list

    // Print the list again after insertion
    printList(Head);

    return 0;
}
