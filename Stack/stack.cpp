#include <iostream>
using namespace std;

class Stack {
    int arr[100]; // Array to hold stack elements
    int topIndex; // Index of the top element

public:
    Stack() {
        topIndex = -1; // Initialize stack as empty
    }

    void push(int x) {
        if (topIndex >= 99) {
            cout << "Stack Overflow" << endl;
        } else {
            arr[++topIndex] = x;
        }
    }

    void pop() {
        if (topIndex == -1) {
            cout << "Stack Underflow" << endl;
        } else {
            topIndex--;
        }
    }

    int top() {
        if (topIndex == -1) {
            cout << "Stack is Empty" << endl;
            return -1;
        }
        return arr[topIndex];
    }

    bool isEmpty() {
        return topIndex == -1;
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    cout << "Top element: " << s.top() << endl;
    s.pop();
    cout << "Top element after pop: " << s.top() << endl;
    return 0;
}
