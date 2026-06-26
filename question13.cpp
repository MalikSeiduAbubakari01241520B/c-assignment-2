#include <iostream>
using namespace std;

int main() {
    float resistance;

    cin >> resistance;

    while(resistance <= 5) {
        cout << "Earth resistance acceptable" << endl;
        cin >> resistance;
    }

    cout << "Earth resistance too high. Improve earthing system.";

    return 0;
}
