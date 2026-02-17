
#include <iostream> 
using namespace std; 

int main() {
	double num1, num2; 
	char ope;

	// Display instructions
	cout << "Simple Calculator" << endl;

	cout << "Enter first number: ";
	cin >> num1; // Get first number from user

	cout << "Enter operator (+, -, *, /): ";
	cin >> ope; // Get operator from user

	cout << "Enter second number: ";
	cin >> num2; // Get second number from user

	double result; // Variable to store result

	// Perform calculation based on operator
	switch(ope) 
    {
		case '+':
			result = num1 + num2;
			break;
		case '-':
			result = num1 - num2;
			break;
		case '*':
			result = num1 * num2;
			break;
		case '/':
			if(num2 != 0)
				result = num1 / num2;
			else 
            {
				cout << "Error: Division by zero!" << endl;
				return 1; // Exit with error
			}
			break;
		default:
			cout << "Invalid operator!" << endl;
			return 1; // Exit with error
	}

	// Display result
	cout << "Result: " << result << endl;

	return 0;
}
