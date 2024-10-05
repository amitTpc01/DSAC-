// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    
    Node(int val){
        data=val;
        next=NULL;
    }
        
};

int main() {
    // Node A1;
    // A1.data=4;
    // A1.next =NULL;
    Node* A1=new Node(4);
    
    std::cout << A1->data<<endl;
        std::cout << A1->next<<endl;


    return 0;
}