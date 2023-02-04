#include<stdio.h>
int main()
{
    int a,m,n,sum,temp;
    while(scanf("%d %d",&m,&n)==2)
    {
        if(m==-1 && n==-1) break;

        if(m<n){
            sum=n-m;
        }
        else if(n<m){
            sum=m-n;
        }

        temp=100-sum;
        if(temp<=sum) printf("%d\n",temp);
        else if(sum<temp) printf("%d\n",sum);
    }
    return 0;
}
