#include <bits/stdc++.h>
using namespace std;

int main()
{
    string num;
    int T,i,N,sum;

    cin >> T;
    while(T--)
    {
        cin >> num;
        sum = 0;
        for(i=0; i<num.size(); i++)
        {
            N=num[i]-'0';
            sum=sum+N;
        }

        cout << sum << endl;

    }
	return 0;
}
