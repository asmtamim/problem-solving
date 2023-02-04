#include<stdio.h>
int main()
{
    int x,y,n,i,j;

    scanf("%d",&y);
    for(x=1; x<=y; x++)
    {
        scanf("%d",&n);
        double arr[n];

        for(i=0; i<n; i++){
            scanf("%lf",&arr[i]);
        }
        j=n;
        while(j>1)
        {
            for(i=0; i<j-1; i++){
                arr[i]=(arr[i]+arr[i+1])/2;
            }
            j--;
        }
        printf("Case #%d: %.3lf\n",x,arr[0]);
    }
    return 0;
}
