// Its all about loop.
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main(){
    // for loop
    int n;
    cout << " Enter a number to make table: ";
    cin >> n;

    for (int i = 1; i <= 10; i++){
        cout << n << " x " << i << " = " << n*i << endl; //to make table    
    }
    return 0;
}