#include <iostream>
using namespace std;

int main() {
    float voltage;

    cin >> voltage;

    while(voltage < 12) {
        cout << "Battery charging..." << endl;
        cin >> voltage;
    }

    cout << "Battery fully charged";

    return 0;
}
