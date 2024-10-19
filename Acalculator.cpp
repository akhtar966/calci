#include <iostream>
#include <cmath>
using namespace std;

void showMenu() {
    cout << "Select operation:\n";
    cout << "1. Addition (+)\n";
    cout << "2. Subtraction (-)\n";
    cout << "3. Multiplication (*)\n";
    cout << "4. Division (/)\n";
    cout << "5. Exponentiation (^)\n";
    cout << "6. Logarithm (log)\n";
    cout << "7. Sine (sin)\n";
    cout << "8. Cosine (cos)\n";
    cout << "9. Tangent (tan)\n";
    cout << "0. Exit\n";
}

int main() {
    int choice;
    double num1, num2;

    while (true) {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 0) {
            break;
        }

        if (choice >= 1 && choice <= 4) {
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
        } else if (choice >= 5 && choice <= 9) {
            cout << "Enter a number: ";
            cin >> num1;
        }

        switch (choice) {
            case 1:
                cout << "Result: " << num1 + num2 << endl;
                break;
            case 2:
                cout << "Result: " << num1 - num2 << endl;
                break;
            case 3:
                cout << "Result: " << num1 * num2 << endl;
                break;
            case 4:
                if (num2 != 0)
                    cout << "Result: " << num1 / num2 << endl;
                else
                    cout << "Error: Division by zero!" << endl;
                break;
            case 5:
                cout << "Result: " << pow(num1, num2) << endl;
                break;
            case 6:
                if (num1 > 0)
                    cout << "Result: " << log(num1) << endl;
                else
                    cout << "Error: Logarithm of non-positive number!" << endl;
                break;
            case 7:
                cout << "Result: " << sin(num1) << endl;
                break;
            case 8:
                cout << "Result: " << cos(num1) << endl;
                break;
            case 9:
                cout << "Result: " << tan(num1) << endl;
                break;
            default:
                cout << "Error: Invalid choice!" << endl;
                break;
        }
    }

    return 0;
}
