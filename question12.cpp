#include <iostream>
using namespace std;

int main() {
    float voltage;

    cin >> voltage;

    while(voltage >= 18) {
        cout << "Voltage acceptable" << endl;
        cin >> voltage;
    }

    cout << "Solar panel voltage below operating level";

    return 0;
}
