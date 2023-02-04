#include<stdio.h>
#include<math.h>
int main()
{
    int x,test=1;
    double u,t,v,a,s;
    while(scanf("%d",&x)==1 && x!=0)
    {
        if(x==1)
        {
            scanf("%lf %lf %lf",&u,&v,&t);
            s=((v+u)/2)*t;
            a=(v-u)/t;
            printf("Case %d: %.3lf %.3lf\n",test,s,a);
        }
        else if(x==2)
        {
            scanf("%lf %lf %lf",&u,&v,&a);
            t=(v-u)/a;
            s=((v+u)/2)*t;
            printf("Case %d: %.3lf %.3lf\n",test,s,t);
        }
        else if(x==3)
        {
            scanf("%lf %lf %lf",&u,&a,&s);
            v=sqrt((u*u)+(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",test,v,t);
        }
        else if(x==4)
        {
            scanf("%lf %lf %lf",&v,&a,&s);
            u=sqrt((v*v)-(2*a*s));
            t=(v-u)/a;
            printf("Case %d: %.3lf %.3lf\n",test,u,t);
        }
        test++;
    }
    return 0;
}
