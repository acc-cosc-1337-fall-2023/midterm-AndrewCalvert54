#include "question3.h"

string decimal_to_hex(int decimal) {
    string hex = "";
    const char* hex_chars = "0123456789ABCDEF";
    while(decimal > 0) {
        hex = hex_chars[decimal % 16] + hex;
        decimal /= 16;
    }
    return hex.empty() ? "0" : hex;
}