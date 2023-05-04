#include <iostream>

using namespace std;

int main()
{
	cout << "Hello World!\n";
	cout << "Printing text...\n\n";

	char character = 'S';
	int number = 5;
	double number2 = 7.6;
	bool testBool = true;
	string phrase = "Test string.";

	int x = 10, y = 15, z = 20;

	const int constNum = 100;

	double userNum1 = 0.0;
	double userNum2 = 0.0;

	cout << "Please enter a number: ";
	cin >> userNum1;
	cout << "Please enter another number: ";
	cin >> userNum2;

	double result = userNum1 + userNum2;
	cout << "Adding the two numbers together results in " << result << '\n';

	float floatNum = 7.77;

	string myString1 = "Hello ";
	string myString2 = "World";
	string myString3 = myString1 + myString2;

	cout << myString3 << '\n';

	string testString = "strawberry";

	cout << testString.length() << '\n';
	cout << testString[2] << '\n';
	
	testString[6] = 'a';

	cout << testString;
}
