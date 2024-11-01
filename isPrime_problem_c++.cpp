/*
Write a program in c++ to make a function isprime() to accept a number as a parameter and
 return 1 if it is prime and return 0 if it is not prime.
*/

#include <iostream>
using namespace std;
isprime(int x) {
    int flag = 1;
    if (x == 1) {
        return 0;
    } else {
        for (int i = 2; i <= x/2; i++) {
            if (x % i == 0) {
                flag = 0;
                break;
            } else {
                flag = 1;
            }
        }
        if (flag) {
            return 1;
        } else {
            return 0;
        }
    }
} 
int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    if (x < 1) {
        cout << "Numbers less than 1 are neither prime nor composite." << endl;
    } else if (isprime(x)) {
        cout << "It's a prime number!" << endl;
    } else {
        cout << "Not a prime number!" << endl;
    }
    return 0;
}
