#include <iostream>

using namespace std;

int main()
{
	double operand1, operand2;
	double result;

	char operation;
	char r;

	do
	{
		cin >> operand1 >> operation >> operand2;
		cout << " = ";
		switch (operation)
		{
		case '+':
			result = operand1 + operand2;
			cout << result;
			break;
		case '-':
			result = operand1 - operand2;
			cout << result;
			break;
		case '*':
			result = operand1 * operand2;
			cout << result;
			break;
		case '/':
			if (operand2 == 0)
			{
				cout << "Error";
			}
			else
			{
				result = operand1 / operand2;
				cout << result;
			}
			break;
		}
		cout << "\nAgain? (1): ";
		cin >> r;
	} while (r == '1');


	return 0;
}
