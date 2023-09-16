#include <iostream>

using namespace std;

void inputRectangular(double* length, double* width, double* height);
double surroundingArea(double* length, double* width, double* height);
double totalArea(double* length, double* width, double* height);
double volumeRectangular(double* length, double* width, double* height);

int main() {
    double length, width, height;
    inputRectangular(&length, &width, &height);
    surroundingArea(&length, &width, &height);
    totalArea(&length, &width, &height);
    volumeRectangular(&length, &width, &height);
    return 0;
}

void inputRectangular(double* length, double* width, double* height) {
    cout << "Enter length, width and height of the rectangular: ";
    cin >> *length >> *width >> *height;
}

double surroundingArea(double* length, double* width, double* height) {
    double surrounding;
    surrounding = (*height) * 2 * (*length + *width);
    cout << "Surrounding area of the rectangular: " << surrounding << endl;
}

double totalArea(double* length, double* width, double* height) {
    double total;
    total = (*height) * 2 * (*length + *width) + (*length + *width) * 4;
    cout << "Total area of the rectangular: " << total << endl;
}

double volumeRectangular(double* length, double* width, double* height) {
    double volume;
    volume = (*length) * (*width) * (*height);
    cout << "Volume of the rectangular: " << volume << endl; 
}