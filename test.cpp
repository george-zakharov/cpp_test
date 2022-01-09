#include <iostream>
#include <string>
using namespace std;

int sum;

void addTwoNumbers(int x, int y) {
    sum = x + y;
    cout << "The sum is: " << sum;
}

int main() {
    int x, y;
    string hello = "Hello User!";
    string fullName;
    string* ptr = &hello; // Creating a pointer

    cout << hello << endl;
    cout << ptr << endl;
    cout << "What is your name? ";
    getline (cin, fullName);
    cout << "Well, hello, " + fullName << endl;

    cout << "Type first number: ";
    cin >> x;
    cout << "Type second number: ";
    cin >> y;
    
    addTwoNumbers(x, y);

    return 0;
}