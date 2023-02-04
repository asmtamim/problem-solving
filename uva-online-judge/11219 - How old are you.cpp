#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,i,d1,m1,y1,d2,m2,y2,D1,D2,Y,days;
    char ch;
    scanf("%lld",&n);
    scanf("%c",&ch);
    for(i=1; i<=n; i++)
    {
        scanf("%c",&ch);
        scanf("%lld %c %lld %c %lld",&d1,&ch,&m1,&ch,&y1);
        scanf("%lld %c %lld %c %lld",&d2,&ch,&m2,&ch,&y2);

        D1=(y1*365)+(m1*30)+d1;
        D2=(y2*365)+(m2*30)+d2;
        days=D1-D2;
        Y=days/365;

        if(days<0){
            printf("Case #%lld: Invalid birth date\n",i);
        }
        else if(Y>130){
            printf("Case #%lld: Check birth date\n",i);
        }
        else{
            printf("Case #%lld: %lld\n",i,Y);
        }
    }
    return 0;
}
