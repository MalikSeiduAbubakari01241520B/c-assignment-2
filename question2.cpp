#include <iostream>
using namespace std;

int main() {
    float temp;
    cin >> temp;

    if (temp > 70)
        cout << "Cable overheating detected";
    else
        cout << "Cable temperature is within safe range";

    return 0;
}
