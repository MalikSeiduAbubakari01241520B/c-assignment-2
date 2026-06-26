#include <iostream>
using namespace std;

int main() {
    int choice;
    double value;

    cout << "1. Volts to millivolts\n";
    cout << "2. Amperes to milliamperes\n";
    cout << "3. Kilowatts to watts\n";
    cout << "4. Ohms to kilo-ohms\n";

    cin >> choice;
    cin >> value;

    switch(choice) {
        case 1: cout << value * 1000 << " mV"; break;
        case 2: cout << value * 1000 << " mA"; break;
        case 3: cout << value * 1000 << " W"; break;
        case 4: cout << value / 1000 << " kO"; break;
        default: cout << "Invalid option";
    }

    return 0;
}
