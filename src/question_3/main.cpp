#include <iostream>
#include "question3.h"

using std::cin;
using std::cout;

int main() {
    int decimal;
    cout << "Enter a decimal number between 1 and 512, or 0 to exit: ";
    while(cin >> decimal && decimal != 0) {
        if(decimal >= 1 && decimal <= 512) {
            cout << "The hexadecimal representation is: " << decimal_to_hex(decimal) << "\n";
        } else {
            cout << "Please enter a number in the range 1-512.\n";
        }
        cout << "Enter a decimal number between 1 and 512, or 0 to exit: ";
    }
    return 0;
}
