#include <iostream>

using namespace std;

void getNumber(int* a, int* b);
void GCD(int a, int b, int* gcd);
void LCM(int a, int b, int gcd, int* lcm);

int main() {
    int a, b;
    int gcd, lcm;
    getNumber(&a, &b);
    GCD(a, b, &gcd);
    LCM(a, b, gcd, &lcm);
    return 0;
}

void getNumber(int* a, int* b) {
    do {
        cout << "Enter two integer numbers: ";
        cin >> *a >> *b;
    } while(*a < 0 && *b < 0);
}

void GCD(int a, int b, int* gcd) {
    while(a != b) {
        if(a > b) {
            a = a - b;
        } else {
            b = b - a;
        }
    }
    *gcd = a;
    cout << "Greatest common divisor of " << a << " and " << b << " is: " << *gcd << endl;
}

void LCM(int a, int b, int gcd, int* lcm) {
    *lcm = (a * b) / gcd;
    cout << "Least common multiple of " << a << " and " << b << " is: " << *lcm << endl; 
}