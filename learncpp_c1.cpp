#include <iostream>

using namespace std;

int main() {
    int a{};
    int b{};

    cout << "Enter an integer: ";
    cin >> a;
    cout << "Enter another integer: ";
    cin >> b;

    cout << a << " + " << b << " is " << a + b << "." << endl;
    cout << a << " - " << b << " is " << a - b << "." << endl;
    return 0;
}