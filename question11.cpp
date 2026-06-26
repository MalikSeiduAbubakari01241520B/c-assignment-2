#include <iostream>
using namespace std;

int main() {
    float temp;

    cin >> temp;

    while(temp <= 90) {
        cout << "Motor temperature safe" << endl;
        cin >> temp;
    }

    cout << "Motor temperature unsafe. Stop motor test.";

    return 0;
}
