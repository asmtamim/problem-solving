#include <bits/stdc++.h>
using namespace std;
int  main()
{
    int x; float y, z;
    cin >> x >> y;
    if(x%5==0 && y>x)
    {
        z=(y-x)-0.5;
        if(z>=0) printf("%.2f",z);
        else printf("%.2f",y);
    }

    else if(y<=x || x%5!=0)
    {
        printf("%.2f",y);
    }

    return 0;
}
