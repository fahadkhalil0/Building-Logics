#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << " ----------------------------" <<endl;
    cout << " ATM Withdrawal System " <<endl;
    cout << " ----------------------------" <<endl;

    double totalB, withdrawalB;

    cout << "Enter your total balance: ";
    cin >> totalB;

    cout << "Enter your withdrawal amount: ";
    cin >> withdrawalB;

    if(withdrawalB > totalB){
        cout << "Insufficient Balance, please reload your account." <<endl;
    }else if (withdrawalB <= totalB){
        cout << "Withdrawal successful, please take your cash." <<endl;
        float remaining = totalB - withdrawalB;
        cout << "Your remaining balance is: "<< remaining <<endl;
    }

    cout << "Thank you for using our ATM services." <<endl;
    
    return 0;
}