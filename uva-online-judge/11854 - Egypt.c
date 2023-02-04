#include<stdio.h>
int main()
{
    int a,b,c,d,x,y;
    while(scanf("%d %d %d",&a,&b,&c)==3 && a!=0 && b!=0 && c!=0)
    {
        if(a>b && a>c){
            d=a;
            x=(d*d);
            y=(b*b)+(c*c);
        }
        else if(b>c && b>a){
            d=b;
            x=(d*d);
            y=(a*a)+(c*c);
        }
        else if(c>a && c>b){
            d=c;
            x=(d*d);
            y=(b*b)+(a*a);
        }

        if(x==y) printf("right\n");
        else printf("wrong\n");
    }
    return 0;
}
