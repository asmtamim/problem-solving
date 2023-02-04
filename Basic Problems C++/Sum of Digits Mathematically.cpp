#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N;
    cin >> T;

    for(int i=1; i<=T; i++)
    {
        cin >> N;

        int sum=0;
        while(N!=0)
        {
            int m = N%10;
            sum = sum+m;
            N = N/10;
        }

        cout << sum << endl;
    }
    return 0;
}
