#include <iostream>
using namespace std;

int main(){
int INT_MAX;
    int result= INT_MAX;
    int arr[5]={4,5,6,2,9};
        for (int i = 0; i < 5; i++) {
        if (arr[i] < result) {  
            result = arr[i];    
        }
    }

    cout << "Minimum value: " << result << endl;

    return 0;
}