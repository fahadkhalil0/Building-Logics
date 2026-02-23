#include <iostream>
#include <string>
using namespace std;

int main(){
    // Real world problem using loop

    // Problem no ---1
    int marks;
    for(int i = 1; i<=5; i++){
        cout << "Enter the marks of student:" << 0+i << " : ";
        cin >> marks;
    }
    if (marks <=500){
            //find total sum
            int totalsum = 0;
            totalsum += marks;
            cout << "Total sum of marks is: " << totalsum << endl;

            float avg = totalsum/5;
            cout << "Average marks is: " << avg << endl;
        } else {
            cout << "Invalid marks entered. Please enter marks out of 500." << endl;
        }

    // Problem no ---2
    int even= 0;
    int odd = 0;

    int number;
    for (int i = 1; i<=10; i++){
        cout << "Enter a number:";
        cin >> number;

        if (number%2 == 0){
            cout << "Even number entered: " << number << endl;
            even++;
        } else {
            cout << "Odd number entered: " << number << endl;
            odd++;
        }


    // Problem no ---3

    int number;
    for(int i = 1; i<=10; i++){
        cout << "Enter numbers:";
        cin >> number;
    }

    while(number !=0){
        cout << number << " ";
        number --;
    }

}