#include <iostream>
using namespace std;

class Stack {
    int arr[2];   
    int top;      
    int n;        

public:
    
    Stack() {
        top = -1;          
        n = sizeof(arr) / sizeof(arr[0]);  
    }

    void push(int x) {
        if (top == n - 1) {  
            cout << "Stack overflow. Cannot push " << x << " onto the stack." << endl;
        } else {
            arr[++top] = x;
            cout << "Pushed " << x << " onto the stack." << endl;

            
            cout << "Current stack: ";
            for (int i = 0; i <= top; i++) {
                cout << arr[i] << " ";  
            }
            cout << endl;
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack underflow. Cannot pop from the stack." << endl;
        } else {
            cout << "Popped " << arr[top] << " from the stack." << endl;
            top--;
            
            cout << "Current stack: ";
            if (top == -1) {
                cout << "Stack is empty." << endl;
            } else {
                for (int i = 0; i <= top; i++) {
                    cout << arr[i] << " ";  
                }
                cout << endl;
            }
        }
    }
};

int main() {
    Stack s;
    s.push(10);  
    s.push(20);  
    s.pop();     
    s.pop();     
    s.pop();     

    return 0;
}
