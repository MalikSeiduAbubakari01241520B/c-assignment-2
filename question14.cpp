#include <iostream>
#include <string>
using namespace std;

int main() {
    string code;
    int attempts = 0;

    cin >> code;

    while(code != "BEE208" && attempts < 2) {
        attempts++;
        cin >> code;
    }

    if(code == "BEE208")
        cout << "Access granted";
    else
        cout << "Access denied. Maximum attempts reached.";

    return 0;
}
