#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << " ----------------------------" <<endl;
    cout << " Bill Split System " <<endl;
    cout << " ----------------------------" <<endl;

    int totalBill;
    cout << "Enter the total bill amount: ";
    cin >> totalBill;
    // double BS = totalBill /2; ---> Manaual CHecking

    if (totalBill %2 == 0){ // Checking if the total bill is divisible by 2!
        cout << " You can split evenly. "<<endl;
    } else {
        cout << " One person pay extra bill."<<endl;
    }

    cout << "Your total bill is: " << totalBill <<endl;
    cout << "Thank you for using our Bill Split System." <<endl;
    return 0;
}