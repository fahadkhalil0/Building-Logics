#include <iostream>
using namespace std;

int main()
{
    cout << " ----------------------------" <<endl;
    cout << " COnditional statements" <<endl;
    cout << " ----------------------------" <<endl;

    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    //if else- if statement
    if (num1> num2){
        cout << "The first number is greater than the second number." <<endl;
    } else if (num1 < num2){
        cout << "The first number is less than the second number." <<endl;
    } else {
        cout << "The first number is equal to the second number." <<endl;
    }
    
    return 0;
}