#include <iostream>
#include <climits>
using namespace std;

int findMaxHourglassSum(int arr[6][6], int &hourglassCount) {
    int maxSum = INT_MIN; 
    hourglassCount = 0; 

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            hourglassCount++; 

            int hourglassSum = arr[i][j] + arr[i][j+1] + arr[i][j+2]
                             + arr[i+1][j+1]
                             + arr[i+2][j] + arr[i+2][j+1] + arr[i+2][j+2];

            maxSum = max(maxSum, hourglassSum);
        }
    }
    return maxSum; 
}

int main() {
    int arr[6][6] = {
        {1, 1, 1, 0, 0, 0},
        {0, 1, 0, 0, 0, 0},
        {1, 1, 1, 0, 0, 0},
        {0, 0, 2, 4, 4, 0},
        {0, 0, 0, 2, 0, 0},
        {0, 0, 1, 2, 4, 0}
    };

    int hourglassCount = 0; 
    int maxSum = findMaxHourglassSum(arr, hourglassCount);

    cout << "Total number of hourglasses: " << hourglassCount << endl;
    cout << "Maximum Hourglass Sum: " << maxSum << endl;

    return 0;
}
