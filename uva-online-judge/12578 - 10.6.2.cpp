#include<bits/stdc++.h>
using namespace std;
int main()
{
    double t,L,rA,gA,w,r,total;
    cin>>t;
    while(t--)
    {
        cin>>L;

        w= L*0.6;
        total= L*w;

        r= L/5;
        rA= 3.14159265358979323846264338327950288*(r*r);

        total= L*w;
        gA= total-rA;

        printf("%.2lf %.2lf\n",rA,gA);
    }
    return 0;
}
