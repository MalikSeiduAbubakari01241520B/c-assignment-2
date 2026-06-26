#include <iostream>
using namespace std;

int main() {
    float wattage, total = 0;

    for(int i = 1; i <= 12; i++) {
        cin >> wattage;
        total += wattage;
    }

    cout << "Total Power = " << total << " W";

    return 0;
}
