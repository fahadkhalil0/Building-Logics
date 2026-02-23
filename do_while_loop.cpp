#include <iostream>
using namespace std;

int main(){
    // do while loop
    
    int n;
    cout << "Enter a number to make table: ";
    cin >> n;

    int i = 1; //initialization of i
    do{
        cout << n << " x " << i << " = " << n*i << endl; //multiply the value
        i++; //incrementing i to avoid infinite loop
    }while (i<=10);

    return 0;
}