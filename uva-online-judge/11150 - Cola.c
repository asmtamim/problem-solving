#include<stdio.h>
int main()
{
    int m,n;
    while(scanf("%d",&n)==1 && n>0)
    {
        m=n;
        n++;

        while(n>2){
            m=m+(n/3);
            n=(n/3)+(n%3);
        }
        printf("%d\n",m);
    }
    return 0;
}
