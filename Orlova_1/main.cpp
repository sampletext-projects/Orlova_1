#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "russian");
	double operand1, operand2;
	double result;

	char operation;
	char r;

	cout << "Выполнила студентка группы УТН-111 Орлова А.А." << endl;
	cout << "Программа \"Простой калькулятор\"" << endl;

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
	}
	while (r == '1');


	return 0;
}
