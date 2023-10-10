#include <iostream>
#include "question4.h"

using std::cout;
using std::cin;

int main() {
    double m, v;
    do {
        cout << "Enter mass (kg) and velocity (m/s), or 0 0 to exit: ";
        cin >> m >> v;

        // Check if inputs are valid
        while(m < 0 || v < 0) {
            cout << "Invalid input. Please enter positive numbers only.\n";
            cout << "Enter mass (kg) and velocity (m/s), or 0 0 to exit: ";
            cin >> m >> v;
        }

        // Check if inputs are zeros
        if(m != 0 && v != 0) {
            cout << "Kinetic Energy: " << get_kinetic_energy(m, v) << " joules\n\n";
        }
    } while(m != 0 && v != 0);

    cout << "Program terminated.\n";
    return 0;
}