#include<stdio.h>
#include<math.h>
int main()
{
    long long int num,x,y,a,b;
    while(scanf("%lld",&num)==1 && num>0)
    {
        x=sqrt(num);
        y=cbrt(num);

        a=(x*x);
        b=(y*y*y);

        if(b==num && a==num){
            printf("Special\n");
        }
        else{
            printf("Ordinary\n");
        }
    }
    return 0;
}
