#include <iostream>
using namespace std;

int main() {
    for (int i = 0; i <= 5; i++) {
        cout << "Multiplication table of " << i << ":\n";
        for (int j = 1; j <= 10; j++) {
            cout << i << " * " << j << " = " << i * j << endl;
        }
        cout << "\n";
    }

    return 0;
}
