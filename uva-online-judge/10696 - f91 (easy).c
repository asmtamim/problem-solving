#include<stdio.h>
int main()
{
    int n,m;
    while(scanf("%d",&n)==1 && n>0)
    {
        if(n>100){
            m=n-10;
        }

        else{
            m=91;
        }

        printf("f91(%d) = %d\n",n,m);
    }
    return 0;
}
