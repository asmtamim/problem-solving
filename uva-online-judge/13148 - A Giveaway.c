#include<stdio.h>
#include<math.h>
int main()
{
    long long int num,x,y,a,b;
    while(scanf("%lld",&num)==1 && num>0)
    {
        x=sqrt(num); y=cbrt(num);

        while((x*x) < num){
            x=x+1;
        }
        while((y*y*y) < num){
            y=y+1;
        }

        if((x*x)==num && (y*y*y)==num){
            printf("Special\n");
        }
        else{
            printf("Ordinary\n");
        }
    }
    return 0;
}
