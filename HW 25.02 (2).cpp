#include <iostream>
#include <stack>
using namespace std;

void Check(string example)
{
	stack<char> symbol;

	symbol.push(example[0]);

	for (int i = 1; i<example.length(); i++)
	{
		if (example[i] == '(' || example[i] == '[' || example[i] == '{')
		{
			symbol.push(example[i]);
		}

		else if (example[i] == ')')
		{
			if (symbol.top() == '(')

				symbol.pop();

			else
				break;
		}

		else if (example[i] == ']')
		{
			if (symbol.top() == '[')

				symbol.pop();

			else
				break;
		}

		else if (example[i] == '}')
		{
			if (symbol.top() == '{')

				symbol.pop();

			else
				break;
		}

	}

	if (symbol.empty())
	{
		cout << "The expression is true" << "\n";

	}

	else
	{
		cout << "The expression is wrong" << "\n";
	}

}

int main()
{
	string example = "{(5-[3+<9>])-4{";

	Check(example);
}