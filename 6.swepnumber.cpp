#include <iostream>
using namespace std;

int main() {
    int x, y, temp;
    cout << "Enter Value Of X: ";
    cin >> x;
    cout << "Enter Value Of y: ";
    cin >> y;
    temp = x;
    x = y;
    y = temp;
    cout << "After swap, x = " << x << ", y = " << y << endl;
    return 0;
}

