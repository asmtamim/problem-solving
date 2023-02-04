#include<stdio.h>
int main()
{
    long long int x,y;
    long long int k,n,m,a,b,c,d,sum;
    scanf("%lld",&y);
    for(x=1; x<=y; x++)
    {
        sum=0;
        scanf("%lld",&k);
        m=sqrt(k);
        for(n=2; n<=m; n++)
        {
            if(k%n==0){
                if(sum==0){
                    a=n;
                    b=k/n;
                    sum=sum+1;
                }
                else{
                    c=n;
                    d=k/n;
                    sum=0;
                    break;
                }
            }
        }
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",x,k,a,b,c,d);
    }
    return 0;
}

