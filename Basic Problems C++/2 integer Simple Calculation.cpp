#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T; //Test case.
	cin >> T;
	for (int i = 1; i <= T; i++)
	{
		int a, b; //Read the inputs.
		cin >> a >> b;

		//Compute the answers.
		int sum = a + b;
		int sub = a - b;
		int div = a / b;
		int mult = a * b;

		cout << "Summation: " << sum << endl;
		cout << "Subtraction: " << sub << endl;
		cout << "Division: " << div << endl;
		cout << "Multiplication: " << mult << endl;
	}

	return 0;
}
