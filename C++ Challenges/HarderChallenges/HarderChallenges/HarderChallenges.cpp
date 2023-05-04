#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
    // Multi line code comments

    /* This is testing out 
    multi line comments */

    // Getline() function challenge

    string name;
    cout << "Please type in your full name: ";
    getline(cin, name);
    cout << "Your full name is " << name << "\n\n";

    // Math functions challenge
    cout << "Math functions challenge\n";

    cout << max(20, 30) << '\n';
    cout << sqrt(25) << '\n';
    cout << round(5.6) << '\n';
    cout << pow(5, 3) << "\n\n";

    // Conditional statements challenge
    cout << "Conditional statements challenge\n";

    int x = 10;
    int y = 5;

    if (x > y)
    {
        cout << "x is greater than y\n";
    }
    else if (x == y)
    {
        cout << "x is equal to y\n";
    }
    else
    {
        cout << "x is less than y\n";
    }

    int z = 2;
    switch (z)
    {
    case 1:
        cout << "z is 1";
        break;
    case 2:
        cout << "z is 2";
        break;
    case 3:
        cout << "z is 3";
        break;
    case 4:
        cout << "z is 4";
        break;
    case 5:
        cout << "z is 5";
        break;
    }

    int a = 30;
    int b = 25;

    string result = (a < b) ? "a is less than b" : "a is not less than b";
    cout << '\n' << result << '\n';

    // While loop challenge

    int number = 0;
    while (number < 5)
    {
        cout << number << '\n';
        number++;
    }

    // Do/while loop challenge

    int number2 = 0;
    do
    {
        cout << number2 << '\n';
        number2++;
    }
    while (number2 < 5);

    // For loop challenge

    for (int i = 0; i < 5; i++)
    {
        cout << i << '\n';
    }

    // Break and continue challenge
    cout << "\nBreak and continue challenge\n";

    int f = 0;
    while (f < 10)
    {
        if (f == 3)
        {
            f++;
            continue;
        }
        if (f == 7)
        {
            break;
        }
        cout << f << '\n';
        f++;
    }

    // Array challenge

    int myArray[3] = { 5, 10, 15 };
    cout << '\n' << myArray[1] << '\n';

    // Array loop challenge

    for (int i = 0; i < 3; i++)
    {
        cout << myArray[i] << '\n';
    }

    // Reference variable challenge

    string fruit = "Apple";
    string &refFruit = fruit;

    cout << fruit << '\n';
    cout << refFruit << '\n';
}