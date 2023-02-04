#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,t,n,m,a,b;
    cin>>x;
    for(t=1; t<=x; t++)
    {
        cin>>n>>m;
        a=n/3;
        b=m/3;

        printf("%d\n",(a*b));
    }
    return 0;
}
