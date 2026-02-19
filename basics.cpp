#include <iostream>
using namespace std;

int main(){
    cout << "Practice File" <<endl;
    cout << "FOP Learning"<<endl;
    int a;
    bool pass = true;
    bool fail = false;

    cout << "FOP COURSE IS" << pass <<endl;
    cout << "FOP COURSE IS" << fail <<endl;

    // Permitive Data Types:-
    cout << "Permitive Data Types" <<endl;
    int b,c;
    cout << "Enter the value of a:";
    cin >> a;
    b = 10;
    c = a+b;
    cout << "The value of c is:" << c <<endl;

    double pi = 3.145789;
    bool isEven = true;

    // String Operations:-
    string greet;
    cout << "Enter a greeting message:";
    cin >> greet;
    cout << "You entered: " << greet <<endl;
    return 0;
}