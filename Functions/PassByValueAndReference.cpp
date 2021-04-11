#include <iostream>
// function that takes value as parameter

using namespace std;

void func1(int numVal) {
    // code
    cout << "func1 value " << numVal << endl;
    cout << "func1 reference " << &numVal << endl;
}

// function that takes reference as parameter
// notice the & before the parameter
void func2(int &numRef) {
    // code
    cout << "func2 value " << numRef << endl;
    cout << "func2 reference " << &numRef << endl;
}

int main() {
    int num = 5;

    // pass by value
    func1(num);

    // pass by reference
    func2(num);

    return 0;
}