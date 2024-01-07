#include <iostream>

using namespace std;

int main() {

    int base, h, height, extra;

    cout << "Enter Height of Star: ";
    cin >> h;
    cout << endl;

    height = h * 2 / 3;
    base = 2 * height - 1;
    extra = (h % 2 == 0) ? h / 3 - 1 : h / 3 - 2;

    for (int i = h - 2; i >= 0; i--) {
        for (int j = 0; j < base; j++)
            ((j >= i - extra - 1 && j <= base - i + extra && i > extra) || (j >= height - i - 1 && j <= base - (height - i) && i < height)) ? cout << "*" : cout << " ";
        cout << endl;
    }

    return 0;

}