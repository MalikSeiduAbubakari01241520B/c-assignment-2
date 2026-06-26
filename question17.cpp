#include <iostream>
using namespace std;

int main() {
    float fuel;

    cin >> fuel;

    while(fuel > 10) {
        cout << "Fuel level sufficient" << endl;
        cin >> fuel;
    }

    cout << "Low fuel warning";

    return 0;
}
