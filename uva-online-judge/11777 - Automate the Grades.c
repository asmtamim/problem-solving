#include<stdio.h>
int main()
{
    int t1,t2,fin,atnd,ct1,ct2,ct3,ctb,total;
    int x,y;

    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d %d %d %d %d %d %d",&t1,&t2,&fin,&atnd,&ct1,&ct2,&ct3);

        if(ct1>=ct3 && ct2>=ct3) ctb=(ct1+ct2)/2;
        else if(ct1>=ct2 && ct3>=ct2) ctb=(ct1+ct3)/2;
        else if(ct2>=ct1 && ct3>=ct1) ctb=(ct2+ct3)/2;

        total=t1+t2+fin+atnd+ctb;

        if(total>=90) printf("Case %d: A\n",x);
        else if(total>=80) printf("Case %d: B\n",x);
        else if(total>=70) printf("Case %d: C\n",x);
        else if(total>=60) printf("Case %d: D\n",x);
        else if(total<60) printf("Case %d: F\n",x);

    }
    return 0;
}
