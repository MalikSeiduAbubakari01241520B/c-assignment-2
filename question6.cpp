#include <iostream>
using namespace std;

int main() {
    int choice;
    float PT, ST, PV, SV;

    cout << "1. Calculate Turns Ratio\n";
    cout << "2. Calculate Secondary Voltage\n";
    cout << "3. Calculate Primary Voltage\n";
    cin >> choice;

    switch(choice) {
        case 1:
            cin >> PT >> ST;
            cout << "Turns Ratio = " << PT / ST;
            break;

        case 2:
            cin >> PV >> ST >> PT;
            cout << "Secondary Voltage = " << (PV * ST) / PT;
            break;

        case 3:
            cin >> SV >> PT >> ST;
            cout << "Primary Voltage = " << (SV * PT) / ST;
            break;

        default:
            cout << "Invalid Option";
    }

    return 0;
}
