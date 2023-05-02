#include <iostream>

using namespace std;

int readNumber(){
    int input{};
    cout << "Enter an integer: ";
    cin >> input;
    return input;
}

void writeAnswer(int answer){
    cout << "The sum of your integers is: " << answer << endl;
}

int main() {
    int a{readNumber()};
    int b{readNumber()};
    writeAnswer(a+b);
    return 0;
}