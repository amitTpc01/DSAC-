#include <iostream>

class Stack {
private:
    struct Node {
        int data;
        Node* next;
        
        Node(int val) : data(val), next(nullptr) {}
    };
    
    Node* top;

public:
    // Constructor
    Stack() : top(nullptr) {}
    
    // Destructor
    ~Stack() {
        while (!isEmpty()) {
            pop();
        }
    }
    
    // Push function
    void push(int value) {
        Node* newNode = new Node(value);
        newNode->next = top;
        top = newNode;
    }
    
    // Pop function
    void pop() {
        if (isEmpty()) {
            std::cerr << "Stack is empty!" << std::endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        delete temp;
    }
    
    // Peek function
    int peek() const {
        if (isEmpty()) {
            std::cerr << "Stack is empty!" << std::endl;
            return -1;
        }
        return top->data;
    }
    
    // Check if stack is empty
    bool isEmpty() const {
        return top == nullptr;
    }
    
    // Display stack contents
    void display() const {
        Node* temp = top;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    Stack stack;
    
    stack.push(10);
    stack.push(20);
    stack.push(30);
    
    std::cout << "Stack: ";
    stack.display();
    
    std::cout << "Top element: " << stack.peek() << std::endl;
    
    stack.pop();
    std::cout << "Stack after pop: ";
    stack.display();
    
    return 0;
}
