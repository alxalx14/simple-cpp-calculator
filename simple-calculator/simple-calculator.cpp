#include <cmath>
#include <iostream>

using namespace std;
int main()
{
	int num1;
	int num2;
	int result;
	string operatorCalc;
	string question;

	cout << "Welcome to the Simple Calculator !\n";
	cout << "Please chose an operator";
	cout << "\n + \n - \n * \n /\n";
	cout << "\n>" ;cin >> operatorCalc;

	cout << "\nFirst Number: "; cin >> num1;
	cout << "\nSecond Number: "; cin >> num2;

	if (operatorCalc == "+") {
		result = num1 + num2;
	}
	else if (operatorCalc == "-") {
		result = num1 - num2;
	}
	else if (operatorCalc == "*") {
		result = num1 * num2;
	}
	else if (operatorCalc == "/") {
		result = num1 / num2;
	}
	else {
		cout << "Invalid Operator !";
	}

	cout << "\nResult: " << result;
	cout << "\nWould you like to perform another calculation ?  ";
	cout << "y/n\n > "; cin >> question;

	while (question == "y" || question == "yes") 
	{
		cout << "Welcome to the Simple Calculator !\n";
		cout << "Please chose an operator";
		cout << "\n + \n - \n * \n /\n";
		cout << "\n>"; cin >> operatorCalc;

		cout << "\nFirst Number: "; cin >> num1;
		cout << "\nSecond Number: "; cin >> num2;

		if (operatorCalc == "+") {
			result = num1 + num2;
		}
		else if (operatorCalc == "-") {
			result = num1 - num2;
		}
		else if (operatorCalc == "*") {
			result = num1 * num2;
		}
		else if (operatorCalc == "/") {
			result = num1 / num2;
		}
		else {
			cout << "Invalid Operator !";
		}
		cout << "\nResult: " << result;
		cout << "\nWould you like to perform another calculation ?  ";
		cout << "y/n\n > "; cin >> question;
	}
	
}

