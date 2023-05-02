#include <iostream>

using namespace std;

int main(){
    int a{rand()};
    int b{rand()};
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    int temp{a};
    a = b;
    b = temp;

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    return 0;
}

