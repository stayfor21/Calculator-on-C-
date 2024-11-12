// Calculator project
#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

int main() {
    char repeat;

    do {
        cout << "\n\t\t\t<Calculator Console App>\n" << endl;
        
        char math;

        do {
            cout << "Choose a mathematical operation (+, -, *, /, ^, s for square root): ";
            cin >> math;
            if (math == '+' || math == '-' || math == '*' || math == '/' || math == '^' || math == 's') {
                break;
            } else {
                cout << "Invalid operation. Please enter one of the following: +, -, *, /, ^, s\n";
            }
        } while (true);

        float a, b;

        if (math == 's') {
            do {
                cout << "Enter the number to find the square root: ";
                if (!(cin >> a)) {
                    cout << "Invalid input! Please enter a valid number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else if (a < 0) {
                    cout << "Error: Cannot take the square root of a negative number.\n";
                } else {
                    break;
                }
            } while (true);
        } else {
            do {
                cout << "Enter the first number: "; 
                if (!(cin >> a)) {
                    cout << "Invalid input! Please enter a valid number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else {
                    break;
                }
            } while (true);

            do {
                cout << "Enter the second number: ";
                if (!(cin >> b)) {
                    cout << "Invalid input! Please enter a valid number.\n";
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                } else if (math == '/' && b == 0) {
                    cout << "Error: Division by zero is undefined.\n";
                } else {
                    break;
                }
            } while (true);
        }

        cout << "\nResult: ";
        switch (math) {
            case '+':
                cout << a << " + " << b << " = " << a + b << endl;
                break;
            case '-':
                cout << a << " - " << b << " = " << a - b << endl;
                break;
            case '*':
                cout << a << " * " << b << " = " << a * b << endl;
                break;
            case '/':
                cout << a << " / " << b << " = " << a / b << endl;
                break;
            case '^': 
                cout << a << "^" << b << " = " << pow(a, b) << endl;
                break;
            case 's':
                cout << "s" << a << " = " << sqrt(a) << endl;
                break;
        }

        cout << "Would you like to perform another calculation? (y/n): ";
        cin >> repeat;
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    } while (repeat == 'y' || repeat == 'Y');

    cout << "Thank you for using the calculator! Goodbye!\n";
    return 0;
}
