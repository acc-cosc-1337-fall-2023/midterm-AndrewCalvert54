#include "question2.h"
#include <iostream>

using std::cin;
using std::cout;

int main() {
    int val = 10;
    int ref = 20;

    cout << "Original values: val = " << val << ", ref = " << ref << "\n";
    int sum = modifyValues(val, ref);
    cout << "Modified values: val = " << val << ", ref = " << ref << "\n";
    cout << "Sum of modified values: " << sum << "\n";

    return 0;
}