#include<stdio.h>
int main()
{
    int n,m,i,k,j,a,cycle;
    while(scanf("%d %d",&n,&m)==2)
    {
        cycle=0;
        printf("%d %d ",n,m);
        if(n>m)
        {
            k=m;
            m=n;
            n=k;
        }
        for(i=n; i<=m; i++){
            a=1;
            j=i;
            while(j>1){
                if(j%2==0){
                    j=j/2;
                    a=a+1;
                }
                else{
                    j=(3*j)+1;
                    a=a+1;
                }
            }
            if(a>=cycle){
                cycle=a;
            }
        }
        printf("%d\n",cycle);
    }
    return 0;
}
