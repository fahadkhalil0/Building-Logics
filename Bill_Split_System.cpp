#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << " ----------------------------" <<endl;
    cout << " Bill Split System " <<endl;
    cout << " ----------------------------" <<endl;

    double totalBill;
    cout << "Enter the total bill amount: ";
    cin >> totalBill;
    double BS = totalBill /2;

    if (totalBill == BS){
        cout << " You can split evenly. "<<endl;
    } else {
        cout << " One person pay extra bill."<<endl;
    }

    cout << "Your total bill is: " << totalBill <<endl;
    cout << "Each person should pay: " << BS <<endl;
    cout << "Thank you for using our Bill Split System." <<endl;
    return 0;
}