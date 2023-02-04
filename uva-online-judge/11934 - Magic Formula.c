#include<stdio.h>
int main()
{
    int a,b,c,d,L,x,y,sum;
    while(scanf("%d %d %d %d %d",&a,&b,&c,&d,&L)==5)
    {
        if(a==0 && b==0 && c==0 && d==0 && L==0)
            break;

        sum=0;
        for(x=0; x<=L; x++)
        {

            y=(a*x*x)+(b*x)+c;
            if(y%d==0)
            {
                sum=sum+1;
            }
        }
        printf("%d\n",sum);
    }
    return 0;
}
