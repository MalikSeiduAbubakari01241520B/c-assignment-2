#include <iostream>
using namespace std;

int main() {
    int choice;

    cout << "1. Check Wiring\n";
    cout << "2. Inspect Circuit Breaker\n";
    cout << "3. Test Insulation Resistance\n";
    cout << "4. Check Earthing System\n";

    cin >> choice;

    switch(choice) {
        case 1:
            cout << "Check wiring";
            break;
        case 2:
            cout << "Inspect circuit breaker";
            break;
        case 3:
            cout << "Test insulation resistance";
            break;
        case 4:
            cout << "Check earthing system";
            break;
        default:
            cout << "Invalid option";
    }

    return 0;
}
