#include <iostream>
#include "question1.h"

using std::cin;
using std::cout;

int main() {
    double celsius;
    char continue_program;
    do {
        cout << "Enter temperature in Celsius: ";
        cin >> celsius;

        cout << celsius << " Celsius is " << get_fahrenheit(celsius) << " Fahrenheit\n";

        cout << "Do you want to convert another temperature? (y/n): ";
        cin >> continue_program;

    } while(continue_program == 'y' || continue_program == 'Y');

    cout << "Goodbye!\n";
    return 0;
}