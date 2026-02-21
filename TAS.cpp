#include <iostream>
#include <string>
using namespace std;

int main(){
    cout << " ----------------------------" <<endl;
    cout << " Temperature Advice System " <<endl;
    cout << " ----------------------------" <<endl;

    int temp;
    cout << "Enter the current temperature in celsuis:";
    cin >> temp;

    //Conditional Statements
    if ( temp == 35){
        cout << "Hot weather" <<endl;
    } else if ((temp == 20) || (temp == 35)){
        cout << " Nice Weather " <<endl;
    } else if ((temp == 10) || (temp == 19)){
        cout << "Cold Weather" <<endl;
    } else if (temp <10){
        cout << "Very Cold Weather" <<endl;
    }
    
    cout << "Thank you for using our Temperature Advice System." <<endl;
    return 0;
}