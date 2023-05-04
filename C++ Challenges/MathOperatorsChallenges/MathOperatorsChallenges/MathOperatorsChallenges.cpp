#include <iostream>

using namespace std;

int main()
{
    // Operators challenge
    cout << "Operators challenge\n";

    cout << 5 + 5 << '\n';
    cout << 10 - 7 << '\n';
    cout << 3 * 3 << '\n';
    cout << 20 / 5 << '\n';

    int x = 10;
    cout << ++x << "\n\n";

    // Comparison operators challenge
    cout << "Comparison operators challenge\n";

    cout << (5 > 3) << '\n';
    cout << (2 == 1) << '\n';
    cout << (2 != 1) << '\n';
    cout << (6 <= 2) << "\n\n";

    // Assignment operators challenge
    cout << "Assignment operators challenge\n";

    int a = 10;
    a += 5;
    cout << a << '\n';

    int b = 5;
    b &= 3;
    cout << b << '\n';

    int c = 5;
    c <<= 3;
    cout << c << "\n\n";

    // Logical operator challenge
    cout << "Logical operator challenge\n";

    int d = 12, e = 15;
    cout << (d > 10 && e > 10) << '\n';

    cout << (d > 10 || e > 20) << '\n';

    cout << !(d > 10 && e > 10) << '\n';
}