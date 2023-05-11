#include <iostream>

using namespace std;

class Dog {
public:
    string breed;
    string color;
    int height;
    int weight;

    void shake() {
        cout << "The dog shakes!\n";
    }

    void sit() {
        cout << "The dog sits!\n";
    }

    void layDown() {
        cout << "The dog is laying down!\n";
    }
};

int main()
{
    cout << "OOP Assignment\n\n";

    Dog dogObject;
    dogObject.breed = "Hound";
    dogObject.color = "Brown";
    dogObject.height = 2;
    dogObject.weight = 60;

    cout << dogObject.breed << '\n';
    cout << dogObject.color << '\n';
    cout << dogObject.height << " feet\n";
    cout << dogObject.weight << " pounds\n\n";

    dogObject.shake();
    dogObject.sit();
    dogObject.layDown();
}