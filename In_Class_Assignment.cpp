/* Calculator Program
   Create a menu driven program that allows the user to select what arithmetic operation they want  to perform
   -- display menu
   -- get user choices
   -- calculate result
   -- output result
*/ 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    double num1, num2, result = 1;

    cout << "Welcome to the VS calculator!" << endl;
    cout << "Enter a digit corresponding to the operation" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Modulo" << endl;
    cout << "6. Power" << endl;
    cout << "7. (Exit Code)" << endl;

    cin >> choice;

    cout << "Please enter the two numbers with space between" << endl;

    cin >> num1 >> num2;

    switch (choice) {
    case 1: cout << "Addition";
        cin >> num1 >> num2;
        result = num1 + num2;
        break;
    case 2: cout << "Subtraction";
        cin >> num1 >> num2;
        result = num1 - num2;
        break;
    case 3: cout << "Multiplication";
        cin >> num1 >> num2;
        result = num1 * num2;
        break;
    case 4: cout << "Division";
        cin >> num1 >> num2;
        result = num1 / num2;
        break;
    case 5: cout << "Modulo";
        cin >> num1 >> num2;
        result = num1 + num2; // Need to make num1 and num2 integers
        break;
    case 6: cout << "Power";
        cin >> num1 >> num2;
        result = num1 + num2;  // Need to determine how to calc powers
        break;
    default: cout << "Exiting Program";  // Need to skip results cout
        break;

    }

        cout << "Hmm, looks like your answer is ...!" << result;
  
        return 0;

}

