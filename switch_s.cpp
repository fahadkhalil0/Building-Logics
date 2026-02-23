#include <iostream>
#include <string>
using namespace std;

void banner()
{
    cout << " ------------------------" << endl;
    cout << " Simple Arithematic Calculator" << endl;
    cout << " ------------------------" << endl;

    cout << endl;
    cout << "1- Addition" << endl;
    cout << "2- Subtraction" << endl;
    cout << "3- Multiplication" << endl;
    cout << "4- Division" << endl;
}

int main()
{

    banner();
    int num1, num2, choice;

    cout << "Enter your choice:";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << "Enter value of num1:";
        cin >> num1;
        cout << "Enter value of num2:";
        cin >> num2;
        cout << "Addition of " << num1 << " and " << num2 << " is: " << num1 + num2 << endl;
        break;
    case 2:
        cout << "Enter value of num1:";
        cin >> num1;
        cout << "Enter value of num2:";
        cin >> num2;
        cout << "Subtraction of " << num1 << " and " << num2 << " is: " << num1 - num2 << endl;
        break;
    case 3:
        cout << "Enter value of num1:";
        cin >> num1;
        cout << "Enter value of num2:";
        cin >> num2;
        cout << "Multiplication of " << num1 << " and " << num2 << " is: " << num1 * num2 << endl;
        break;
    case 4:
        cout << "Enter value of num1:";
        cin >> num1;
        cout << "Enter value of num2:";
        cin >> num2;
        if (num2 != 0)
        {
            cout << "Division of " << num1 << " and " << num2 << " is: " << num1 / num2 << endl;
        default:
            cout << "Invalid choice!" << endl;
            break;
        }
    }
    return 0;
}