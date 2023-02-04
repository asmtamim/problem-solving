#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;

    for(int i=1; i<=T; i++)
    {
        cin >> N;

        int rev=0;
        while(N!=0)
        {
            int mod = N%10;
            rev = (rev*10) + mod; // EKOK-DOSOK-SOTOK and so-on and on!
            N = N/10;
        }

        cout << rev << endl;
    }
    return 0;
}
