#include <iostream>
using namespace std;

int main() {
    char input;
    int count = 0;

    for (int i = 0; i < 5; i++) {
        cout << "Enter a 5 character ('n' to exit): ";
        cin >> input;

        if (input == 'n') {
            cout << "Exiting loop." << endl;
            break;
        }

        cout << "You entered: " << input << endl;
        count++;
    }

    if (count == 5) {
        cout << "You entered 5 characters." << endl;
    }

    return 0;
}
