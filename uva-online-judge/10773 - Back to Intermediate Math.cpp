#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    double d,rv,bu,V,tv,tu,p;
    cin>>n;
    for(t=1; t<=n; t++)
    {
        cin>>d>>rv>>bu;
        if(rv==0 || bu==0 || rv>=bu){
            printf("Case %d: can't determine\n",t);
            continue;
        }
        V=sqrt((bu*bu)-(rv*rv));
        tv=d/V;
        tu=d/bu;
        p=abs(tv-tu);
        printf("Case %d: %.3lf\n",t,p);
    }
    return 0;
}
