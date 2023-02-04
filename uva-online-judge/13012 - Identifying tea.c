#include<stdio.h>
int main()
{
    int t;
    int a,b,c,d,e,sum;

    while(scanf("%d",&t)==1 && t>=1 && t<=4)
    {
        sum=0;
        scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);

        if(t==a){sum=sum+1;}
        if(t==b){sum=sum+1;}
        if(t==c){sum=sum+1;}
        if(t==d){sum=sum+1;}
        if(t==e){sum=sum+1;}

        printf("%d\n",sum);
    }
    return 0;
}
