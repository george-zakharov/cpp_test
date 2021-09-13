#include <iostream>
#include <string>
using namespace std;

int main() {
    int x, y, sum;
    string hello = "Hello User!";
    string fullName;

    cout << hello << endl;
    cout << "What is your name? ";
    getline (cin, fullName);
    cout << "Well, hello, " + fullName << endl;

    cout << "Type first number: ";
    cin >> x;
    cout << "Type second number: ";
    cin >> y;
    sum = x + y;
    cout << "The sum is: " << sum;
    return 0;
}