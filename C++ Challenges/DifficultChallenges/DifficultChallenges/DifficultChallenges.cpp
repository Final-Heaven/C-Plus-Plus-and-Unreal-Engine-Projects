#include <iostream>

using namespace std;

void testFunction()
{
    cout << "Success!\n\n";
}

void multipleFunction(string fName, string lName)
{
    cout << fName << " " << lName << "\n\n";
}

int returnFunction(int num1, int num2)
{
    return num1 + num2;
}

void swapNums(int &x, int &y)
{
    int z = x;
    x = y;
    y = z;
}

int returnFunction(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}

//

class MyClass {
public:
    int num1;
};

//

class MyOtherClass {
public:
    void myMethod() {
        cout << "Success!\n\n";
    }

    void myOtherMethod();
};

void MyOtherClass::myOtherMethod() {
    cout << "Also success!\n\n";
}

//

class Example {
public:
    string color;
    int number;
    Example(string x, int y) {
        color = x;
        number = y;
    }
};

class Example2 {
public:
    string animal;
    int number;
    Example2(string x, int y);
};

Example2::Example2(string x, int y) {
    animal = x;
    number = y;
}

//

class PrivateTest {
public:
    int x;
private:
    int y;
protected:
    int z;
};

//

class ChildClass : public PrivateTest{

};

class GrandchildClass : public ChildClass {
public:
    void setNumber(int a) {
        z = a;
    }

    int getNumber() {
        return z;
    }
};

class MultipleClass : public MyClass, public MyOtherClass {

};

//

class Animal {
public:
    void animalSound() {
        cout << "The animal makes a sound \n\n";
    }
};

class Cat : public Animal {
public:
    void animalSound() {
        cout << "The cat meows.\n\n";
    }
};

int main()
{
    // & Operator Challenge

    string fruit = "Apple";
    cout << &fruit << "\n\n";

    // Pointer Challenge

    string* ptr = &fruit;
    cout << ptr << "\n\n";

    // Dereference Operator Challenge

    cout << *ptr << "\n\n";

    // Main() Function Challenge

    testFunction();

    // Function Challenge

    testFunction();

    multipleFunction("John", "Doe");

    cout << returnFunction(5, 9) << "\n\n";

    int x = 4;
    int y = 7;

    swapNums(x, y);

    cout << x << y << "\n\n";

    cout << returnFunction(10, 11) << "\n\n";
    cout << returnFunction(1, 2, 3) << "\n\n";

    // Class Challenge

    MyClass object1;
    object1.num1 = 5;

    MyClass object2;
    object2.num1 = 10;

    cout << object1.num1 << "\n\n";
    cout << object2.num1 << "\n\n";

    // Class Methods Challenge

    MyOtherClass myObject;

    myObject.myMethod();
    myObject.myOtherMethod();

    // Constructor Method Challenge

    Example exampleObject("Red", 9);
    cout << exampleObject.color << " " << exampleObject.number << "\n\n";

    Example2 exampleObject2("Zebra", 5);
    cout << exampleObject2.animal << " " << exampleObject2.number << "\n\n";

    // Private Keyword Challenge

    PrivateTest privateObject;
    privateObject.x = 5;
    //privateObject.y = 10; can't do this

    // Protected Keyword Challenge

    privateObject.x = 20;
    //privateObject.z = 15; can't do this either

    // Inheritance Challenge

    GrandchildClass grandchildObject;
    grandchildObject.setNumber(30);
    cout << grandchildObject.getNumber() << "\n\n";

    // Polymorphism Challenge

    Cat catObject;
    catObject.animalSound();

    // Exception Challenge

    try {
        int age = 32;
        if (age >= 35) {
            cout << "You are old enough!\n\n";
        }
        else {
            throw (age);
        }
    }
    catch (int x) {
        cout << "You are not old enough!\n";
        cout << "You are only " << x << " years old!\n\n";
    }
}