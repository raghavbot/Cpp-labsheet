//Write a program using the function overloading that converts feet to inches. Use function with no argument, one argument and two arguments. Decide yourself the types of arguments. Use pass by reference in any one of the function above.
#include <iostream>
using namespace std;

void convertRef(float &feet, float &inches) {
    inches = feet * 12;
}

void convert(float a) {
    float inch = 12 * a;
    cout << "Converted value: " << inch << " inches" << endl;
}

void convert(float a, float b) {
    float inch1 = 12 * a;
    float inch2 = 12 * b;
    cout << "Converted values: " << inch1 << " inches and " << inch2 << " inches" << endl;
}

int main() {
    float feet, feet1, inches;

    cout << "Enter the feet: ";
    cin >> feet;
    convert(feet);

    cout << "Enter another value in feet: ";
    cin >> feet1;
    convert(feet, feet1);

    convertRef(feet, inches);
    cout << "The inches are: " << inches << " inches" << endl;

    return 0;
}
