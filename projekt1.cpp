#include <iostream>
#include <string>

using namespace std;

int main() {
    string x1, y1;
    int x, y;

    do {
        cout << "Enter x:";
        cin >> x1;
        if (x1 == "e") break; // break condition check
        x = stoi(x1); // string to int conversion

        cout << "Enter y:";
        cin >> y1;
        if (y1 == "e") break; // break condition check v2
        y = stoi(y1); // string to int conversion v2

        cout << x <<" * " << y << " = " << x * y << endl;

    } while (true);

    return 0;
}
