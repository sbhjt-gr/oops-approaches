/* Write a program to swap two numbers using pass by value, pass by reference and pass by address. */

#include <iostream>

using namespace std;

void display(int a, int b) {
    cout << "a: " << a << "\nb: " << b << endl;
}

void passByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Pass by value:\n";
    display(a, b);
}

void passByReference(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
    cout << "Pass by reference:\n";
    display(a, b);
}

void passByAddress(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    cout << "Pass by address:\n";
    display(*a, *b);
}

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    cout << "Original value:\n";
    display(a, b);
    
    passByValue(a, b);
    passByReference(a, b);
    passByAddress(&a, &b);
    return 0;
}
