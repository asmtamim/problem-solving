#include<bits/stdc++.h>
using namespace std;
int main()
{
    int bd,ww,t,ab,x;
    char ch,str;
    int i,n,j,a;
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        bd=0;
        ww=0;
        t=0;
        ab=0;

        scanf("%d",&a);
        scanf("%c",&str);
        for(j=1; j<=a; j++)
        {
            scanf("%c",&ch);
            if(ch=='B') bd+=1;
            else if(ch=='W') ww+=1;
            else if(ch=='A') ab+=1;
            else if(ch=='T') t+=1;
        }

        x=a-ab;
        if(ab==a) printf("Case %d: ABANDONED\n",i);
        else if(ww==x) printf("Case %d: WHITEWASH\n",i);
        else if(bd==x) printf("Case %d: BANGLAWASH\n",i);
        else if(bd==ww) printf("Case %d: DRAW %d %d\n",i,bd,t);
        else if(ww>bd) printf("Case %d: WWW %d - %d\n",i,ww,bd);
        else if(bd>ww) printf("Case %d: BANGLADESH %d - %d\n",i,bd,ww);
    }
    return 0;
}
