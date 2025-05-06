#include <iostream>
using namespace std;


void generateBinaryStrings(int n, string str) {
    // Base Case: If the string is of length n, print it
    if (str.length() == n) {
        cout << str << endl;
        return;
    }


    // Recursive Case:
    // Append '0' and recurse
    generateBinaryStrings(n, str + '0');

    // Append '1' and recurse
    generateBinaryStrings(n, str + '1');
}

int main() {
    int N;
    cout << "Enter the length of binary strings: ";
    cin >> N;

    // Start recursion with empty string
    generateBinaryStrings(N, "");

    return 0;
}
