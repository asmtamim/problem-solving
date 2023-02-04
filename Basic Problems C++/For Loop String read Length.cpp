#include <bits/stdc++.h>
using namespace std;

int main()
{
    string S;
    int i,a,T,counter;
    cin >> T;

    for(i=1; i<=T; i++)
    {
        cin >> S;
        counter = 0;
        for(a=0; a<=S.size(); a++)
        {
            if(S[a] =='4') counter++; // String search for 4.
        }

        cout << counter << endl;

    }
	return 0;
}
