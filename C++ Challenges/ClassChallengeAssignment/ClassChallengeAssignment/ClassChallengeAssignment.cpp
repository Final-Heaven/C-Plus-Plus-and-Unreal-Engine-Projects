#include <iostream>

using namespace std;

class Shape {
public:
    string color = "Blue";

    void getArea() {
        cout << "Getting area of shape...\n\n";
    }
};

class Rectangle : public Shape {
public:
    int height = 5;
    int width = 8;
};

class Triangle : public Shape {
public:
    int base = 6;
    int height = 10;
};

class Circle : public Shape {
public:
    int radius = 9;
};

int main()
{
    cout << "Class Challenge Assignment\n\n";

    Rectangle myRectangle;
    Triangle myTriangle;
    Circle myCircle;

    cout << "Rectangle:\n\n";
    cout << myRectangle.color << '\n';
    cout << myRectangle.height << '\n';
    cout << myRectangle.width << '\n';
    myRectangle.getArea();

    cout << "Triangle:\n\n";
    cout << myTriangle.color << '\n';
    cout << myTriangle.base << '\n';
    cout << myTriangle.height << '\n';
    myTriangle.getArea();

    cout << "Circle:\n\n";
    cout << myCircle.color << '\n';
    cout << myCircle.radius << '\n';
    myCircle.getArea();
}