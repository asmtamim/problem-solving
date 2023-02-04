#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, i, num;
    cin >> num;

    a = 0;
    b = 1;
    c = 0;

    cout << "Fibonacci series: ";

    for(i=1; i<=num; i++)
    {
        cout << c << " ";

        a = b;     // Copy n-1 to n-2
        b = c;     // Copy current numbrt to n-1
        c = a + b; // New term.
    }

    return 0;
}
