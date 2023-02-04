#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,mod,sum;
    while (scanf("%lld",&n)==1 && n>0)
    {
        if (n<=9) cout<< n <<endl;
        if (n>9)
        {
            while (n>9)
            {
                sum = 0;
                while (n!=0)
                {
                    mod = n%10;
                    sum = sum + mod;
                    n = n/10;
                }
                n = sum;
            }
            cout<< sum <<endl;
        }
    }
    return 0;
}
