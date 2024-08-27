#include <iostream>

class Queue {
private:
    struct Node {
        int data;
        Node* next;
        
        Node(int val) : data(val), next(nullptr) {}
    };
    
    Node* front;
    Node* rear;

public:
    // Constructor
    Queue() : front(nullptr), rear(nullptr) {}
    
    // Destructor
    ~Queue() {
        while (!isEmpty()) {
            dequeue();
        }
    }
    
    // Enqueue function
    void enqueue(int value) {
        Node* newNode = new Node(value);
        if (rear == nullptr) {
            front = rear = newNode;
        } else {
            rear->next = newNode;
            rear = newNode;
        }
    }
    
    // Dequeue function
    void dequeue() {
        if (isEmpty()) {
            std::cerr << "Queue is empty!" << std::endl;
            return;
        }
        Node* temp = front;
        front = front->next;
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }
    
    // Peek function
    int peek() const {
        if (isEmpty()) {
            std::cerr << "Queue is empty!" << std::endl;
            return -1;
        }
        return front->data;
    }
    
    // Check if queue is empty
    bool isEmpty() const {
        return front == nullptr;
    }
    
    // Display queue contents//
    void display() const {
        Node* temp = front;
        while (temp != nullptr) {
            std::cout << temp->data << " -> ";
            temp = temp->next;
        }
        std::cout << "nullptr" << std::endl;
    }
};

int main() {
    Queue queue;
    
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    
    std::cout << "Queue: ";
    queue.display();
    
    std::cout << "Front element: " << queue.peek() << std::endl;
    
    queue.dequeue();
    std::cout << "Queue after dequeue: ";
    queue.display();
    
    return 0;
}
