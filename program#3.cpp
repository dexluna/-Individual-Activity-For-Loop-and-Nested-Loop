#include <iostream>
using namespace std;

int main() {
    int a = 5; // First term
    int d = 3; // Common difference
    int l = 50; // Last term

    // Calculate the number of terms
    int n = (l - a) / d + 1;

    // Calculate the sum of the series
    int sum = (n / 2) * (a + l);

    cout << "Sum of the series: " << sum << endl;

    return 0;
}
