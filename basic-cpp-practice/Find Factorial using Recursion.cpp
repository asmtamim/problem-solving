#include <iostream>
using namespace std;

int func(int n)
{
    if(n<1)
        return 1;

    else 
        return (n*func(n-1));
}

int main()
{
	int T;
	cout << "Test cases: ";
	cin >> T;

	while(T--)
	{
	    int n;
        long long int factorial;

        cin >> n;
        factorial=func(n);

	    cout << "Factorial: " << factorial << endl;
	}
}
