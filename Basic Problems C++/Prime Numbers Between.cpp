#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, i, j, flag;
    cout << "Select Range: ";
    cin >> n1 >> n2;

    for(i=n1; i<=n2; i++)
    {
        flag = 0;
        for(j=2; j<=i/2; j++)
        {
            if(i%j == 0)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            cout << i << " ";
    }
}
