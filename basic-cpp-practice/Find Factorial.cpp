#include <iostream>
using namespace std;

int main()
{
	int T, x;
	cin >> T;

	while(T--)
	{
	    cin >> x;
        long long int fact=1;

	    for(int i=x; i>=2; i--)
        {
	        fact = fact*i;
	    }

	    cout << fact << endl;
	}
	return 0;
}
