#include <iostream>
using namespace std;

void printno(int num, int n) {
    if (num > n) { 
        return; 
    }
    cout << num << endl; 
    printno(num + 1, n); 
}

int main() {
    int n = 5;
    printno(1, n); 
    return 0;
}
