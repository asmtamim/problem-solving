#include <bits/stdc++.h>
using namespace std;
int main()
{
	int T; //Test case.
	cin >> T;
	while(T--)
	{
		int a, b; // Read the inputs.
		cin >> a >> b;
		int mod = a % b; // Find modulo.

		cout << "Modulo: " << mod << endl;
	}

	return 0;
}
