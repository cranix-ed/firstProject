#include <iostream>
#include <cmath>

using namespace std;

void inputTriangle(double* a, double* b, double* c);
double perimeterTriangle(double* a, double* b, double* c);
double areaTriangle(double* a, double* b, double* c);

int main() {
    double a, b, c;
    inputTriangle(&a, &b, &c);
    perimeterTriangle(&a, &b, &c);
    areaTriangle(&a, &b, &c);
    return 0;
}

void inputTriangle(double* a, double* b, double* c) {
    cout << "Enter three edges of triangle: ";
    cin >> *a >> *b >> *c;
}

double perimeterTriangle(double* a, double* b, double* c) {
    double perimeter;
    perimeter = (*a) + (*b) + (*c);
    cout << "Perimeter of this triangle is: " << perimeter << endl;
}

double areaTriangle(double* a, double* b, double* c) {
    double area;
    double p = (*a + *b + *c) / 2;
    area = sqrt(p * (p - *a) * (p - *b) * (p - *c));
    cout << "Area of this triangle is: " << area << endl;
}