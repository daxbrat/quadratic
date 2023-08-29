#include "std_lib_facilities.h"


int main() {
    double a, b, c;
    cout << "Enter coefficients for the quadratic equation (ax^2 + bx + c = 0):\n";
    cout << "Enter coefficient a: ";
    cin >> a;
    cout << "Enter coefficient b: ";
    cin >> b;
    cout << "Enter coefficient c: ";
    cin >> c;

    if (a == 0) {
        cout << "This is not a quadratic equation (a cannot be 0).\n";
    }
    else {
        double discriminant = b * b - 4 * a * c;

        if (discriminant > 0) {
            double root1 = (-b + sqrt(discriminant)) / (2 * a);
            double root2 = (-b - sqrt(discriminant)) / (2 * a);
            cout << "Two real and distinct roots:\n";
            cout << "Root 1: " << root1 << "\n";
            cout << "Root 2: " << root2 << "\n";
        }
        else if (discriminant == 0) {
            double root = -b / (2 * a);
            cout << "One real root:\n";
            cout << "Root: " << root << "\n";
        }
        else {
            double realPart = -b / (2 * a);
            double imaginaryPart = sqrt(-discriminant) / (2 * a);
            cout << "Two complex roots:\n";
            cout << "Root 1: " << realPart << " + " << imaginaryPart << "i\n";
            cout << "Root 2: " << realPart << " - " << imaginaryPart << "i\n";
        }
    }

    return 0;
}
