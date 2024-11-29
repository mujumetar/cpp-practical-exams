#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;


    int state;
    if (num > 0) {
        state = 1;  
    } else if (num < 0) {
        state = -1; 
    } else {
        state = 0;  
    }

    switch (state) {
        case 1:
            cout << "The number is positive." << endl;
            break;
        case -1:
            cout << "The number is negative." << endl;
            break;
        case 0:
            cout << "The number is zero." << endl;
            break;
        default:
            cout << "Invalid input." << endl;
            break;
    }
    return 0;
}
