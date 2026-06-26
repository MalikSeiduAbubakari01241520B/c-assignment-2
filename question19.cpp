#include <iostream>
using namespace std;

int main() {
    float temp, total = 0;

    for(int i = 1; i <= 10; i++) {
        cin >> temp;
        total += temp;
    }

    cout << "Average Temperature = " << total / 10;

    return 0;
}
