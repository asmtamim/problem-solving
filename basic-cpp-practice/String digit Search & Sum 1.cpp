#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int T,sum;

    cin >> T;
    while(T--)
    {
        cin >> S;
        int length = S.size();

        sum = (S[0]-'0') + (S[length-1]-'0');
        cout << sum << endl;
    }
	return 0;
}
