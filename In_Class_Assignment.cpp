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
    int choice, int1, int2;
    double num1, num2, result = 1;

    do
    {
        cout << "\nWelcome to the VS calculator!" << endl;
        cout << "Enter a digit corresponding to the operation" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Power" << endl;
        cout << "7. (Exit Code)" << endl;

        cin >> choice;

        while (choice < 1 || choice > 7)
        {
            cout << "Your choice must be an integer between 1 and 7. Please try again." << endl;
            cin >> choice;
        }

        switch (choice) {

        case 1: cout << "Addition - " << "Please enter the two numbers with space between" << endl;
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Hmm, looks like your answer is ...!" << result << endl;
            break;
        case 2: cout << "Subtraction - " << "Please enter the two numbers with space between" << endl;
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Hmm, looks like your answer is ...!" << result << endl;
            break;
        case 3: cout << "Multiplication - " << "Please enter the two numbers with space between" << endl;
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Hmm, looks like your answer is ...!" << result << endl;
            break;
        case 4: cout << "Division - " << "Please enter the two numbers with space between" << endl;
            cin >> num1 >> num2;
            result = num1 / num2;
            cout << "Hmm, looks like your answer is ...!" << result << endl;
            break;
        case 5: cout << "Modulo - " << "Please enter the two integers with space between" << endl;
            cin >> int1 >> int2;
            while (int1 < int2)
            {
                cout << "The first integer must be equal to or larger than the second. Please try again." << endl;
                cin >> int1 >> int2;
            }
            result = int1 % int2;
            cout << "Hmm, looks like your answer is ...!" << result << endl;
            break;
        case 6: cout << "Power - " << "Please enter the two numbers with space between" << endl;
            cin >> num1 >> num2;
            result = pow(num1, num2);
            cout << "Hmm, looks like your answer is ...!" << result << endl;
            break;
        case 7: cout << "Exiting the program." << endl;
            break;

        }
    } while (choice != 7);
   
        return 0;

}

