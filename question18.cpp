#include <iostream>
using namespace std;

int main() {
    int code, count = 0;

    cin >> code;

    while(code != 0) {
        count++;
        cin >> code;
    }

    cout << "Total Faults = " << count;

    return 0;
}
