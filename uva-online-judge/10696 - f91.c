#include<stdio.h>
int main()
{
    long long int n,i,j;

    while(scanf("%lld",&n)==1 && n>0)
    {
        if(n<=100)
        {
            for(i=n; i<=100; i++)
            {
                j=i++;
                if(i>=101) j=i-10;
                else i=j;
            }
            printf("f91(%lld) = %lld\n",n,i-11);
        }

        else if(n>=100){
            i=n-10;

            printf("f91(%lld) = %lld\n",n,i);
        }
    }
    return 0;
}

