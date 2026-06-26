#include <iostream>
using namespace std;

int main() {
    float L1, L2, L3, avg;

    for(int i = 1; i <= 6; i++) {
        cin >> L1 >> L2 >> L3;

        avg = (L1 + L2 + L3) / 3;

        cout << "Average = " << avg << endl;
    }

    return 0;
}
