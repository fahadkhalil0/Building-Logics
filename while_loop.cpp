#include <iostream>
#include <string>
using namespace std;

int main(){
    // While loop
    int n, fact = 1, count = 1;
    cout<< "Enter a number to find factorial: ";
    cin >> n;

    while(count<=n){
        fact *= count;
        count++;
    }
    cout << "Factorial of " << n << " is: " << fact;
}