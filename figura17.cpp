#include <iostream>
using namespace std;

int main() {
    int n = 7;
    for (int i = 1; i <= n; i++) {
        if (i <= 4) {
            for (int j = 1; j <= (n - (2 * i - 1)); j++) {
                cout << " ";
            }
            for (int j = 1; j <= (2 * i - 1); j++) {
                cout << "* ";
            }
        }
        else if (i == 5 || i == 6) {
            for (int j = 1; j <= 6; j++) {
                cout << " ";
            }
            cout << "*";
        }
        else if (i == 7) {
            for (int j = 1; j <= 4; j++) {
                cout << " ";
            }
            for (int j = 1; j <= 3; j++) {
                cout << "* ";
            }
        }

        cout << endl;
    }

    return 0;
}