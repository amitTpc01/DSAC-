#include <iostream>
#include <string>
using namespace std;

// Function to reverse characters in a word
void reverseWord(string &str, int start, int end) {
    while (start < end) {
        swap(str[start], str[end]);
        start++;
        end--;
    }
}

void reverseWordsInString(string &str) {
    int n = str.length();
    int start = 0;

    for (int end = 0; end <= n; end++) {
        // When we encounter a space or reach the end of the string, reverse the word
        if (end == n || str[end] == ' ') {
            reverseWord(str, start, end - 1);
            start = end + 1; // Move start to the next word
        }
    }
}

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);  // Read the input string with spaces

    cout << "Original string: " << str << endl;

    reverseWordsInString(str);

    cout << "Reversed words in string: " << str << endl;

    return 0;
}
