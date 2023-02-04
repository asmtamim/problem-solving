#include<stdio.h>
int main()
{
    int d,m,y1,y2,n,bd;
    int a,b;
    scanf("%d",&b);
    for(a=1; a<=b; a++)
    {
        bd=0;
        scanf("%d %d %d %d",&d,&m,&y1,&y2);
        if(d==29 && m==2)
        {
            for(n=y1+4; n<=y2; n=n+4)
            {
                if (n%400==0){
                    bd=bd+1;
                }
                else if(n%4==0 && n%100!=0){
                    bd=bd+1;
                }
            }
            printf("Case %d: %d\n",a,bd);
        }

        else
        {
            bd=y2-y1;
            printf("Case %d: %d\n",a,bd);
        }
    }
    return 0;
}
