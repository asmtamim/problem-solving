#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, mod, T;

    cout << "Test case: ";
    cin >> T;

    while(T--)
    {
        cout << "Enter numbers: ";
        cin >> a >> b;
        mod = a%b;
        cout << mod << endl;
    }
}
