#include <iostream>
using namespace std;

int func()
{
    int x;
    cin >> x;

    long long int fact=1;

    for(int i=2; i<=x; i++){
        fact = fact*i;
    }
    return fact;
}

int main()
{
	int T;
	cout << "Test cases: ";
	cin >> T;

	while(T--)
	{
        int factorial;
        factorial=func();

	    cout << "Factorial: " << factorial << endl;
	}
}
